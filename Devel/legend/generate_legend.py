#!/usr/bin/env python
from math import pi,cos,sin,log,exp,atan
from subprocess import call
import sys, os
import cairo
from queue import Queue

import threading

try:
    import mapnik2 as mapnik
except:
    import mapnik

DEG_TO_RAD = pi/180
RAD_TO_DEG = 180/pi

# Default number of rendering threads to spawn, should be roughly equal to number of CPU cores available
NUM_THREADS = 4


def minmax (a,b,c):
    a = max(a,b)
    a = min(a,c)
    return a

class GoogleProjection:
    def __init__(self,levels=18):
        self.Bc = []
        self.Cc = []
        self.zc = []
        self.Ac = []
        c = 256
        for d in range(0,levels):
            e = c/2;
            self.Bc.append(c/360.0)
            self.Cc.append(c/(2 * pi))
            self.zc.append((e,e))
            self.Ac.append(c)
            c *= 2
                
    def fromLLtoPixel(self,ll,zoom):
         d = self.zc[zoom]
         e = round(d[0] + ll[0] * self.Bc[zoom])
         f = minmax(sin(DEG_TO_RAD * ll[1]),-0.9999,0.9999)
         g = round(d[1] + 0.5*log((1+f)/(1-f))*-self.Cc[zoom])
         return (e,g)
     
    def fromPixelToLL(self,px,zoom):
         e = self.zc[zoom]
         f = (px[0] - e[0])/self.Bc[zoom]
         g = (px[1] - e[1])/-self.Cc[zoom]
         h = RAD_TO_DEG * ( 2 * atan(exp(g)) - 0.5 * pi)
         return (f,h)



def render_legend(mapfile, tile_uri):
    m = mapnik.Map(1024, 2048)
    # Load style XML
    mapnik.load_map(m, mapfile, True)
    # Obtain <Map> projection
    prj = mapnik.Projection(m.srs)
    # Projects between tile pixel co-ordinates and LatLong (EPSG:4326)
    tileproj = GoogleProjection(20)

    # Convert to map projection (e.g. mercator co-ords EPSG:900913)
    c0 = prj.forward(mapnik.Coord(14.4503,50.0673))
    c1 = prj.forward(mapnik.Coord(14.457,50.0678))

    # Bounding box for the tile
    if hasattr(mapnik,'mapnik_version') and mapnik.mapnik_version() >= 800:
        bbox = mapnik.Box2d(c0.x,c0.y, c1.x,c1.y)
    else:
        bbox = mapnik.Envelope(c0.x,c0.y, c1.x,c1.y)
    render_size_x = 1024
    render_size_y = 1500
    m.resize(render_size_x, render_size_y)
    m.zoom_to_box(bbox)
    m.buffer_size = 128

    # Render image with default Agg renderer
    im = mapnik.Image(render_size_x, render_size_y)
    mapnik.render(m, im)
    im.save(tile_uri, 'png256')

    surface = cairo.SVGSurface('legend.svg', render_size_x, render_size_y)
    mapnik.render(m, surface)
    surface.finish()

if __name__ == "__main__":
    render_legend("../../Devel/mapnik/my_styles/MTB-main-legend2.xml", "./legend.png")
