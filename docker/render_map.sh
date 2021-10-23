#!/bin/sh
#perl render_list_geo.pl -n 2 -m default -z 16 -Z 18 -Y 50.2131 -x 14.1965 -y 49.918 -X 14.7685 #Praha
#perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.0 -X 19.0 -Y 51.1 -y 48.5 #CR
LOG=$RENDERING_DIR/logs/$RENDERING_QUADRANTS_LOG
cd $RENDERING_DIR/docker/
echo "Start 'render_list': $(date)" > $LOG
echo "Start render quadrant no. 1: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 1: $(date)" >> $LOG
echo "Start render quadrant no. 2: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 2: $(date)" >> $LOG
echo "Start render quadrant no. 3: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 3: $(date)" >> $LOG
echo "Start render quadrant no. 4: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 4: $(date)" >> $LOG
echo "Start render quadrant no. 5: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 5: $(date)" >> $LOG
echo "Start render quadrant no. 6: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 6: $(date)" >> $LOG
echo "Start render quadrant no. 7: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 7: $(date)" >> $LOG
echo "Start render quadrant no. 8: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 8: $(date)" >> $LOG
echo "Start render quadrant no. 9: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 9: $(date)" >> $LOG
echo "Start render quadrant no. 10: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 10: $(date)" >> $LOG
echo "Start render quadrant no. 11: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 11: $(date)" >> $LOG
echo "Start render quadrant no. 12: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 12: $(date)" >> $LOG
echo "Start render quadrant no. 13: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 13: $(date)" >> $LOG
echo "Start render quadrant no. 14: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 14: $(date)" >> $LOG
echo "Start render quadrant no. 15: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 15: $(date)" >> $LOG
echo "Start render quadrant no. 16: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 16: $(date)" >> $LOG
echo "Start render quadrant no. 17: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 17: $(date)" >> $LOG
echo "Start render quadrant no. 18: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 18: $(date)" >> $LOG
echo "Start render quadrant no. 19: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 19: $(date)" >> $LOG
echo "Start render quadrant no. 20: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 20: $(date)" >> $LOG
echo "Start render quadrant no. 21: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 21: $(date)" >> $LOG
echo "Start render quadrant no. 22: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 22: $(date)" >> $LOG
echo "Start render quadrant no. 23: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 23: $(date)" >> $LOG
echo "Start render quadrant no. 24: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 24: $(date)" >> $LOG
echo "Start render quadrant no. 25: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 25: $(date)" >> $LOG
echo "Start render quadrant no. 26: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 26: $(date)" >> $LOG
echo "Start render quadrant no. 27: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 27: $(date)" >> $LOG
echo "Start render quadrant no. 28: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 28: $(date)" >> $LOG
echo "Start render quadrant no. 29: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 29: $(date)" >> $LOG
echo "Start render quadrant no. 30: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 30: $(date)" >> $LOG
echo "Start render quadrant no. 31: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 31: $(date)" >> $LOG
echo "Start render quadrant no. 32: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 32: $(date)" >> $LOG
echo "Start render quadrant no. 33: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 33: $(date)" >> $LOG
echo "Start render quadrant no. 34: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 34: $(date)" >> $LOG
echo "Start render quadrant no. 35: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 35: $(date)" >> $LOG
echo "Start render quadrant no. 36: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 36: $(date)" >> $LOG
echo "Start render quadrant no. 37: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 37: $(date)" >> $LOG
echo "Start render quadrant no. 38: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 38: $(date)" >> $LOG
echo "Start render quadrant no. 39: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 39: $(date)" >> $LOG
echo "Start render quadrant no. 40: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 40: $(date)" >> $LOG
echo "Start render quadrant no. 41: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 41: $(date)" >> $LOG
echo "Start render quadrant no. 42: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 42: $(date)" >> $LOG
echo "Start render quadrant no. 43: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 43: $(date)" >> $LOG
echo "Start render quadrant no. 44: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 44: $(date)" >> $LOG
echo "Start render quadrant no. 45: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 45: $(date)" >> $LOG
echo "Start render quadrant no. 46: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 46: $(date)" >> $LOG
echo "Start render quadrant no. 47: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 47: $(date)" >> $LOG
echo "Start render quadrant no. 48: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 48: $(date)" >> $LOG
echo "Start render quadrant no. 49: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 49: $(date)" >> $LOG
echo "Start render quadrant no. 50: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 50: $(date)" >> $LOG
echo "Start render quadrant no. 51: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 51: $(date)" >> $LOG
echo "Start render quadrant no. 52: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 52: $(date)" >> $LOG
echo "Start render quadrant no. 53: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 53: $(date)" >> $LOG
echo "Start render quadrant no. 54: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 54: $(date)" >> $LOG
echo "Start render quadrant no. 55: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 55: $(date)" >> $LOG
echo "Start render quadrant no. 56: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 56: $(date)" >> $LOG
echo "Start render quadrant no. 57: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 57: $(date)" >> $LOG
echo "Start render quadrant no. 58: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 58: $(date)" >> $LOG
echo "Start render quadrant no. 59: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 59: $(date)" >> $LOG
echo "Start render quadrant no. 60: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 60: $(date)" >> $LOG
echo "Start render quadrant no. 61: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.699042721111105 -X 19.099042721111104 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 61: $(date)" >> $LOG
echo "Start render quadrant no. 62: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 62: $(date)" >> $LOG
echo "Start render quadrant no. 63: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 63: $(date)" >> $LOG
echo "Start render quadrant no. 64: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 64: $(date)" >> $LOG
echo "Start render quadrant no. 65: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 65: $(date)" >> $LOG
echo "Start render quadrant no. 66: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 66: $(date)" >> $LOG
echo "Start render quadrant no. 67: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 67: $(date)" >> $LOG
echo "Start render quadrant no. 68: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 68: $(date)" >> $LOG
echo "Start render quadrant no. 69: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 69: $(date)" >> $LOG
echo "Start render quadrant no. 70: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 70: $(date)" >> $LOG
echo "Start render quadrant no. 71: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 71: $(date)" >> $LOG
echo "Start render quadrant no. 72: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 72: $(date)" >> $LOG
echo "Start render quadrant no. 73: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 73: $(date)" >> $LOG
echo "Start render quadrant no. 74: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 74: $(date)" >> $LOG
echo "Start render quadrant no. 75: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 75: $(date)" >> $LOG
echo "Start render quadrant no. 76: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 76: $(date)" >> $LOG
echo "Start render quadrant no. 77: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 77: $(date)" >> $LOG
echo "Start render quadrant no. 78: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 78: $(date)" >> $LOG
echo "Start render quadrant no. 79: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 79: $(date)" >> $LOG
echo "Start render quadrant no. 80: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 80: $(date)" >> $LOG
echo "Start render quadrant no. 81: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 81: $(date)" >> $LOG
echo "Start render quadrant no. 82: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 82: $(date)" >> $LOG
echo "Start render quadrant no. 83: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 83: $(date)" >> $LOG
echo "Start render quadrant no. 84: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 84: $(date)" >> $LOG
echo "Start render quadrant no. 85: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 85: $(date)" >> $LOG
echo "Start render quadrant no. 86: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 86: $(date)" >> $LOG
echo "Start render quadrant no. 87: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 87: $(date)" >> $LOG
echo "Start render quadrant no. 88: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 88: $(date)" >> $LOG
echo "Start render quadrant no. 89: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 89: $(date)" >> $LOG
echo "Start render quadrant no. 90: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 90: $(date)" >> $LOG
echo "Start render quadrant no. 91: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 91: $(date)" >> $LOG
echo "Start render quadrant no. 92: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 92: $(date)" >> $LOG
echo "Start render quadrant no. 93: $(date)" >> $LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 93: $(date)" >> $LOG
echo "End 'render_list': $(date)\n" >> $LOG
