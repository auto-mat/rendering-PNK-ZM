#!/usr/bin env python
"""
Watchdog new created/modified rendered tiles files and copy them to the k8 pod
"""

import logging
import os
import subprocess
import sys

import pyinotify

from logging.handlers import RotatingFileHandler

logging.basicConfig(
    handlers=[
        RotatingFileHandler(
            "/var/log/mnk-rendering-watchdog", maxBytes=100000, backupCount=3
        ),
    ],
    level=logging.DEBUG,
    format="[%(asctime)s] %(levelname)s [%(name)s.%(funcName)s:%(lineno)d] %(message)s",
    datefmt="%Y-%m-%dT%H:%M:%S",
)


class EventHandler(pyinotify.ProcessEvent):
    def __init__(self, pod_name="mnk-rendering"):
        self.k8_pod = self.get_k8_pod(pod_name)
        self.pod_name = pod_name
        self.tiles_dir = "/var/lib/mod_tile"
        super().__init__()

    # def process_IN_ACCESS(self, event):
    #     print("ACCESS event:", event.pathname)

    # def process_IN_ATTRIB(self, event):
    #     print("ATTRIB event:", event.pathname)

    # def process_IN_CLOSE_NOWRITE(self, event):
    #     print("CLOSE_NOWRITE event:", event.pathname)

    # def process_IN_CLOSE_WRITE(self, event):
    #     print("CLOSE_WRITE event:", event.pathname)

    # def process_IN_CREATE(self, event):
    #     print("CREATE event:", event.pathname)

    # def process_IN_DELETE(self, event):
    #     print("DELETE event:", event.pathname)

    def get_k8_pod(self, pod_name):
        """Get k8 pod

        :param str pod_name: k8 pod name

        :return str: k8 pod name
        """
        p = subprocess.run(
            "kubectl get pods | grep mnk-rendering | cut -d ' ' -f 1",
            shell=True,
            capture_output=True,
        )
        if p.returncode == 1:
            logging.fatal(p.stderr.decode())
            sys.exit(p.stderr.decode())
        return p.stdout.decode().split("\n")[0]

    def create_k8_pod_tile_dir(self, tile_dir):
        """Create k8 pod tile dir

        :param str tile_dir: tile dir

        :return None
        """
        p = subprocess.run(
            f"kubectl exec -t {self.k8_pod} -- bash -c 'mkdir -p {self.tiles_dir}{tile_dir}'",
            shell=True,
            capture_output=True,
        )
        if p.returncode == 1:
            if "Error from server (NotFound)" in p.stderr.decode():
                self.k8_pod = self.get_k8_pod(pod_name=self.pod_name)
                self.create_k8_pod_tile_dir(tile_dir)
            else:
                message = f"tile file: '{self.tiles_dir}{tile_dir}' Error: {p.stderr.decode()}"
                logging.error(message)

    def copy_k8_pod_tile_file(self, tile_file_src, tile_file_dest):
        """Copy tile file into k8 pod tile dir

        :param str tile_file_src: tile file source path
        :param str tile_file_dest: tile file destination path

        :return None
        """
        p = subprocess.run(
            f"kubectl cp {tile_file_src} {self.k8_pod}:{self.tiles_dir}{tile_file_dest}",
            shell=True,
            capture_output=True,
        )
        if p.returncode == 1:
            if "Error from server (NotFound)" in p.stderr.decode():
                self.k8_pod = self.get_k8_pod(pod_name=self.pod_name)
                self.copy_k8_pod_tile_file(tile_file_src, tile_file_dest)
            else:
                message = f"tile file: '{self.tiles_dir}{tile_file_dest}' Error: {p.stderr.decode()}"
                logging.error(message)

    def process_IN_MODIFY(self, event):
        if "mod_tile" in event.pathname:
            tile_path = event.pathname.split(
                f"/home/{os.getenv('RENDER_USER')}/data/mod_tile",
            )[1]
            if os.path.isdir(event.pathname):
                self.create_k8_pod_tile_dir(
                    tile_dir=os.path.dirname(tile_path),
                )
            else:
                self.create_k8_pod_tile_dir(
                    tile_dir=os.path.dirname(tile_path),
                )
                self.copy_k8_pod_tile_file(
                    tile_file_src=event.pathname,
                    tile_file_dest=tile_path
                )

    # def process_IN_OPEN(self, event):
    #     print("OPEN event:", event.pathname)


def main():
    # Watch manager
    wm = pyinotify.WatchManager()
    wm.add_watch(
        f"/home/{os.getenv('RENDER_USER')}/data/mod_tile/default",
        pyinotify.IN_MODIFY,
        rec=True,
    )

    # Event handler
    eh = EventHandler()

    # Notifier
    notifier = pyinotify.Notifier(wm, eh)
    notifier.loop()


if __name__ == "__main__":
    main()
