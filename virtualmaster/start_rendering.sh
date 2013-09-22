#!/bin/bash
virtualmaster create rendernow --image 3290 --profile small --level testing --script ./init_script.sh
export SERVER_IP=`virtualmaster list | grep rendernow | cut -f4 -d"|" | tr -d " "`
scp -o 'HostKeyAlias rendernow' host_script.sh mtbmap@$SERVER_IP:/home/mtbmap 
ssh mtbmap@$SERVER_IP screen -L -d -m ./host_script.sh
ssh mtbmap@$SERVER_IP "tail -f screenlog.0"
