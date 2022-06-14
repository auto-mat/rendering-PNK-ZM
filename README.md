# MNK Mapnik OSM rendering repository

## Description

Městem na Kole (MNK) Mapnik OSM rendering tiles scripts (running on the our [MNK OSM Mapnik render server](https://github.com/auto-mat/mnk-server-init))
required for the our k8 [mnk-rendering](https://github.com/auto-mat/k8s/blob/master/manifests/ytt/mnk-rendering.yaml#L208)
pod tiles serving app.

## How this works

1. Change global [env](https://github.com/auto-mat/rendering-PNK-ZM/blob/digital-ocean/Devel/systemdeploy/.env) values (secret values are stored in the our private AWS code commit repository (the secrets))
2. For rendering OSM tiles is used [Mapnik](https://github.com/mapnik/mapnik) software (docker mtbmap container `docker pull 439267276348970/mtbmap:0`)
3. Mapnik configuration is stored inside Docker mtbmap container, check it with `if [ "$(docker ps -a | grep -c mtbmap)" -eq 1 ]; then docker exec -it mtbmap bash -c "cat /usr/local/etc/renderd.conf"; fi`
4. Mapnik core configuration values are changed via [env](https://github.com/auto-mat/rendering-PNK-ZM/blob/digital-ocean/Devel/systemdeploy/.env) values and `/home/mtbmap/rendering-PNK-ZM/docker/renderd.conf.sed` file
3. OSM Geospatial data are stored in our k8 unmanaged [PostgreSQL DB (PostGIS extension)](https://github.com/auto-mat/k8s/blob/master/manifests/postgresdb.yaml) pod
4. Updating geospatial OSM PostgreSQL DB geodata and rendering OSM tiles is launched from [cron job](https://github.com/auto-mat/mnk-server-init/blob/main/nixos/configuration.nix#L112), via `/home/mtbmap/rendering-PNK-ZM/Devel/systemdeploy/updatemap.sh` SHELL script
5. Mapnik PostgreSQL DB conection is handled by `cat /home/mtbmap/rendering-PNK-ZM/Devel/mapnik/update_postgis_conn_param.sh` SHELL script
6. Rendering OSM tiles files are stored on the mounted k8 NFS partition (shared by k8 [NFS server](https://github.com/auto-mat/k8s/blob/master/manifests/ytt/nfs-server.yaml#)) `ls -l /home/mtbmap/data/mnk-rendering-data/` which is used by k8 [mnk-rendering](https://github.com/auto-mat/k8s/blob/master/manifests/ytt/mnk-rendering.yaml#L208) pod tiles serving app.
7. Updating geospatial OSM PostgreSQL DB geodata are logged into `tail /home/mtbmap/rendering-PNK-ZM/logs/update_db_and_rendering.log`
8. Rendering geospatial OSM PostgreSQL DB geodata into tile files are logged into `tail /home/mtbmap/rendering-PNK-ZM/logs/rendering_quadrants.log`, executed by quadrants `cat /home/mtbmap/rendering-PNK-ZM/docker/render_map.sh`
9. Rendered OSM tiles are backup via [cron job](https://github.com/auto-mat/mnk-server-init/blob/main/nixos/configuration.nix#L113) into AWS S3 bucket, mounted inside `/root/mnt/mnk-rendering-aws-s3/` directory, logged into `tail /home/mtbmap/rendering-PNK-ZM/logs/backup_tiles.log`

## Available at URLs

MNK OSM rendered tiles 512 x 512 (192 DPI) for GIS: https://mnk-osm-tiles.dopracenakole.net/{z}/{x}/{y}.png

Web app with MNK OSM rendered tiles 512 x 512 (192 DPI): https://embedded-map-test.dopracenakole.net/
