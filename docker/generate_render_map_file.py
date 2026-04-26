import pathlib
import stat
import sys


quadrants = {
    1: """echo "Start 'render_list': $(date)" > $LOG
echo "Start render quadrant no. 1: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 1: $(date)" >> $LOG
     """,
    2: """
echo "Start render quadrant no. 2: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 2: $(date)" >> $LOG
     """,
    3: """
echo "Start render quadrant no. 3: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 3: $(date)" >> $LOG
     """,
    4: """
echo "Start render quadrant no. 4: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 4: $(date)" >> $LOG
     """,
    5: """
echo "Start render quadrant no. 5: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 5: $(date)" >> $LOG
     """,
    6: """
echo "Start render quadrant no. 6: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 6: $(date)" >> $LOG
     """,
    7: """
echo "Start render quadrant no. 7: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 7: $(date)" >> $LOG
     """,
    8: """
echo "Start render quadrant no. 8: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 8: $(date)" >> $LOG
     """,
    9: """
echo "Start render quadrant no. 9: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 9: $(date)" >> $LOG
     """,
    10: """
echo "Start render quadrant no. 10: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 10: $(date)" >> $LOG
     """,
    11: """
echo "Start render quadrant no. 11: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 11: $(date)" >> $LOG
     """,
    12: """
echo "Start render quadrant no. 12: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 12: $(date)" >> $LOG
     """,
    13: """
echo "Start render quadrant no. 13: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 13: $(date)" >> $LOG
     """,
    14: """
echo "Start render quadrant no. 14: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 14: $(date)" >> $LOG
     """,
    15: """
echo "Start render quadrant no. 15: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 15: $(date)" >> $LOG
     """,
    16: """
echo "Start render quadrant no. 16: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 16: $(date)" >> $LOG
     """,
    17: """
echo "Start render quadrant no. 17: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 17: $(date)" >> $LOG
     """,
    18: """
echo "Start render quadrant no. 18: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 18: $(date)" >> $LOG
     """,
    19: """
echo "Start render quadrant no. 19: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 19: $(date)" >> $LOG
     """,
    20: """
echo "Start render quadrant no. 20: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 20: $(date)" >> $LOG
     """,
    21: """
echo "Start render quadrant no. 21: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 21: $(date)" >> $LOG
     """,
    22: """
echo "Start render quadrant no. 22: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 22: $(date)" >> $LOG
     """,
    23: """
echo "Start render quadrant no. 23: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 23: $(date)" >> $LOG
     """,
    24: """
echo "Start render quadrant no. 24: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 24: $(date)" >> $LOG
     """,
    25: """
echo "Start render quadrant no. 25: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 25: $(date)" >> $LOG
     """,
    26: """
echo "Start render quadrant no. 26: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 26: $(date)" >> $LOG
     """,
    27: """
echo "Start render quadrant no. 27: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 27: $(date)" >> $LOG
     """,
    28: """
echo "Start render quadrant no. 28: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 28: $(date)" >> $LOG
     """,
    29: """
echo "Start render quadrant no. 29: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 29: $(date)" >> $LOG
     """,
    30: """
echo "Start render quadrant no. 30: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 30: $(date)" >> $LOG
     """,
    31: """
echo "Start render quadrant no. 31: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 31: $(date)" >> $LOG
     """,
    32: """
echo "Start render quadrant no. 32: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 32: $(date)" >> $LOG
     """,
    33: """
echo "Start render quadrant no. 33: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 33: $(date)" >> $LOG
     """,
    34: """
echo "Start render quadrant no. 34: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 34: $(date)" >> $LOG
     """,
    35: """
echo "Start render quadrant no. 35: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 35: $(date)" >> $LOG
     """,
    36: """
echo "Start render quadrant no. 36: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 36: $(date)" >> $LOG
     """,
    37: """
echo "Start render quadrant no. 37: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 37: $(date)" >> $LOG
     """,
    38: """
echo "Start render quadrant no. 38: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 38: $(date)" >> $LOG
     """,
    39: """
echo "Start render quadrant no. 39: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 39: $(date)" >> $LOG
     """,
    40: """
echo "Start render quadrant no. 40: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 40: $(date)" >> $LOG
     """,
    41: """
echo "Start render quadrant no. 41: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 41: $(date)" >> $LOG
     """,
    42: """
echo "Start render quadrant no. 42: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 42: $(date)" >> $LOG
     """,
    43: """
echo "Start render quadrant no. 43: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 43: $(date)" >> $LOG
     """,
    44: """
echo "Start render quadrant no. 44: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 44: $(date)" >> $LOG
     """,
    45: """
echo "Start render quadrant no. 45: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 45: $(date)" >> $LOG
     """,
    46: """
echo "Start render quadrant no. 46: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 46: $(date)" >> $LOG
     """,
    47: """
echo "Start render quadrant no. 47: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 47: $(date)" >> $LOG
     """,
    48: """
echo "Start render quadrant no. 48: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 48: $(date)" >> $LOG
     """,
    49: """
echo "Start render quadrant no. 49: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 49: $(date)" >> $LOG
     """,
    50: """
echo "Start render quadrant no. 50: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 50: $(date)" >> $LOG
     """,
    51: """
echo "Start render quadrant no. 51: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 51: $(date)" >> $LOG
     """,
   52: """
echo "Start render quadrant no. 52: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 52: $(date)" >> $LOG
     """,
   53: """
echo "Start render quadrant no. 53: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 53: $(date)" >> $LOG
     """,
   54: """
echo "Start render quadrant no. 54: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 54: $(date)" >> $LOG
     """,
   55: """
echo "Start render quadrant no. 55: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 55: $(date)" >> $LOG
     """,
   56: """
echo "Start render quadrant no. 56: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 56: $(date)" >> $LOG
     """,
   57: """
echo "Start render quadrant no. 57: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 57: $(date)" >> $LOG
     """,
   58: """
echo "Start render quadrant no. 58: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 58: $(date)" >> $LOG
     """,
   59: """
echo "Start render quadrant no. 59: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 59: $(date)" >> $LOG
     """,
   60: """
echo "Start render quadrant no. 60: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 60: $(date)" >> $LOG
     """,
   61: """
echo "Start render quadrant no. 61: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 18.699042721111105 -X 19.099042721111104 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 61: $(date)" >> $LOG
     """,
   62: """
echo "Start render quadrant no. 62: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 62: $(date)" >> $LOG
     """,
   63: """
echo "Start render quadrant no. 63: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 63: $(date)" >> $LOG
     """,
   64: """
echo "Start render quadrant no. 64: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 64: $(date)" >> $LOG
     """,
   65: """
echo "Start render quadrant no. 65: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 65: $(date)" >> $LOG
     """,
   66: """
echo "Start render quadrant no. 66: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 66: $(date)" >> $LOG
     """,
   67: """
echo "Start render quadrant no. 67: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 67: $(date)" >> $LOG
     """,
   68: """
echo "Start render quadrant no. 68: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 68: $(date)" >> $LOG
     """,
   69: """
echo "Start render quadrant no. 69: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 69: $(date)" >> $LOG
     """,
   70: """
echo "Start render quadrant no. 70: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 70: $(date)" >> $LOG
     """,
   71: """
echo "Start render quadrant no. 71: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 71: $(date)" >> $LOG
     """,
   72: """
echo "Start render quadrant no. 72: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 72: $(date)" >> $LOG
     """,
   73: """
echo "Start render quadrant no. 73: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 73: $(date)" >> $LOG
     """,
   74: """
echo "Start render quadrant no. 74: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 74: $(date)" >> $LOG
     """,
   75: """
echo "Start render quadrant no. 75: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 75: $(date)" >> $LOG
     """,
   76: """
echo "Start render quadrant no. 76: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 76: $(date)" >> $LOG
     """,
   77: """
echo "Start render quadrant no. 77: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 77: $(date)" >> $LOG
     """,
   78: """
echo "Start render quadrant no. 78: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 78: $(date)" >> $LOG
     """,
   79: """
echo "Start render quadrant no. 79: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 79: $(date)" >> $LOG
     """,
   80: """
echo "Start render quadrant no. 80: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 80: $(date)" >> $LOG
     """,
   81: """
echo "Start render quadrant no. 81: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 81: $(date)" >> $LOG
     """,
   82: """
echo "Start render quadrant no. 82: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 82: $(date)" >> $LOG
     """,
   83: """
echo "Start render quadrant no. 83: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 83: $(date)" >> $LOG
     """,
   84: """
echo "Start render quadrant no. 84: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 84: $(date)" >> $LOG
     """,
   85: """
echo "Start render quadrant no. 85: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 85: $(date)" >> $LOG
     """,
   86: """
echo "Start render quadrant no. 86: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 86: $(date)" >> $LOG
     """,
   87: """
echo "Start render quadrant no. 87: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 87: $(date)" >> $LOG
     """,
   88: """
echo "Start render quadrant no. 88: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 88: $(date)" >> $LOG
     """,
   89: """
echo "Start render quadrant no. 89: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 89: $(date)" >> $LOG
     """,
   90: """
echo "Start render quadrant no. 90: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 90: $(date)" >> $LOG
     """,
   91: """
echo "Start render quadrant no. 91: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 91: $(date)" >> $LOG
     """,
   92: """
echo "Start render quadrant no. 92: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 92: $(date)" >> $LOG
     """,
   93: """
echo "Start render quadrant no. 93: $(date)" >> $LOG
perl render_list_geo.pl -n $MAPNIK_RENDER_LIST_NTHREADS -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 93: $(date)" >> $LOG
echo "End 'render_list': $(date)\\n" >> $LOG
   """,
}

print_quadrants = """#!/bin/sh

LOG=$RENDERING_DIR/logs/$RENDERING_QUADRANTS_LOG                                                                                           
cd $RENDERING_DIR/docker/

"""
last_quadrant_number = 93 
for quadrant in range(int(sys.argv[1]), last_quadrant_number + 1):
   print_quadrants += quadrants[quadrant]


render_map_file = pathlib.Path(__file__).parent / "render_map.sh"

with open(render_map_file, "w") as f:
   f.write(print_quadrants)

render_map_file.chmod(render_map_file.stat().st_mode | 0o111)
