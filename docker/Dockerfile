FROM mapproxy-mapnik
VOLUME /home/rendering

ADD renderd.conf.sed /tmp/
RUN cd /usr/local/etc && sed --file /tmp/renderd.conf.sed --in-place renderd.conf
