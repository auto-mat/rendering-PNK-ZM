#!/bin/sh
RENDERD_LOG=/home/rendering/Devel/systemdeploy/logs/renderd_$(date +\%y\%m\%d).log
cd /home/rendering/docker/
#perl render_list_geo.pl -n 2 -m default -z 16 -Z 18 -Y 50.2131 -x 14.1965 -y 49.918 -X 14.7685 #Praha
#perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.0 -X 19.0 -Y 51.1 -y 48.5 #CR
echo "Start 'render_list': $(date)" > $RENDERD_LOG
echo "Start render quadrant no. 1: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 1: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 2: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 2: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 3: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.20618186888888 -y 49.806181868888885 # Praha
echo "End render quadrant no. 3: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 4: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 4: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 5: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.406181868888886 -y 49.00618186888889 # Brno
echo "End render quadrant no. 5: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 6: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 6: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 7: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 50.20618186888888 -y 49.806181868888885 # Ostrava
echo "End render quadrant no. 7: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 8: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 8: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 9: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.806181868888885 -y 49.406181868888886 # Ostrava
echo "End render quadrant no. 9: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 10: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 10: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 11: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.806181868888885 -y 49.406181868888886 # Plzeň
echo "End render quadrant no. 11: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 12: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 12: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 13: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.20618186888888 -y 49.806181868888885 # Plzeň
echo "End render quadrant no. 13: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 14: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 14: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 15: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.00618186888888 -y 50.60618186888888 # Liberec
echo "End render quadrant no. 15: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 16: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 16: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 17: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 17: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 18: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 51.40618186888888 -y 51.00618186888888 # Liberec
echo "End render quadrant no. 18: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 19: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.60618186888888 -y 50.20618186888888 # Liberec
echo "End render quadrant no. 19: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 20: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 20: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 21: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 21: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 22: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 48.60618186888889 -y 48.20618186888889
echo "End render quadrant no. 22: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 23: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 23: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 24: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 24: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 25: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 25: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 26: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 26: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 27: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 27: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 28: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 28: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 29: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 29: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 30: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 30: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 31: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 31: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 32: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 32: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 33: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 33: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 34: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 34: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 35: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.00618186888889 -y 48.60618186888889
echo "End render quadrant no. 35: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 36: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 36: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 37: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 37: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 38: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 38: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 39: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 39: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 40: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 40: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 41: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 41: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 42: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 42: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 43: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 43: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 44: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 44: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 45: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 45: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 46: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 46: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 47: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.89904272111111 -X 18.299042721111107 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 47: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 48: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.299042721111107 -X 18.699042721111105 -Y 49.406181868888886 -y 49.00618186888889
echo "End render quadrant no. 48: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 49: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 49: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 50: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 50: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 51: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 51: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 52: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 52: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 53: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.699042721111113 -X 15.099042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 53: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 54: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 54: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 55: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 55: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 56: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 56: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 57: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 57: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 58: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 58: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 59: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 59: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 60: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 60: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 61: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 18.699042721111105 -X 19.099042721111104 -Y 49.806181868888885 -y 49.406181868888886
echo "End render quadrant no. 61: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 62: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 62: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 63: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 63: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 64: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 64: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 65: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.099042721111113 -X 15.499042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 65: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 66: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 66: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 67: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 67: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 68: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 68: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 69: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 69: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 70: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 70: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 71: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.20618186888888 -y 49.806181868888885
echo "End render quadrant no. 71: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 72: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 11.89904272111111 -X 12.29904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 72: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 73: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.29904272111111 -X 12.69904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 73: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 74: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 12.69904272111111 -X 13.099042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 74: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 75: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 75: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 76: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 76: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 77: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 77: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 78: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 78: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 79: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 79: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 80: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 80: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 81: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 81: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 82: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.699042721111113 -X 17.09904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 82: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 83: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.09904272111111 -X 17.49904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 83: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 84: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 17.49904272111111 -X 17.89904272111111 -Y 50.60618186888888 -y 50.20618186888888
echo "End render quadrant no. 84: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 85: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.099042721111111 -X 13.499042721111111 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 85: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 86: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.499042721111111 -X 13.899042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 86: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 87: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 87: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 88: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 88: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 89: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.499042721111113 -X 15.899042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 89: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 90: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 15.899042721111114 -X 16.299042721111114 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 90: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 91: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 16.299042721111114 -X 16.699042721111113 -Y 51.00618186888888 -y 50.60618186888888
echo "End render quadrant no. 91: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 92: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 13.899042721111112 -X 14.299042721111112 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 92: $(date)" >> $RENDERD_LOG
echo "Start render quadrant no. 93: $(date)" >> $RENDERD_LOG
perl render_list_geo.pl -n 2 -m default -z 6 -Z 18 -x 14.299042721111112 -X 14.699042721111113 -Y 51.40618186888888 -y 51.00618186888888
echo "End render quadrant no. 93: $(date)" >> $RENDERD_LOG
echo "End 'render_list': $(date)\n" >> $RENDERD_LOG
