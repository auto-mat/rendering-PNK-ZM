#!/bin/bash
virtualmaster create rendernow --image 3290 --profile small --level testing | tee virtualmaster_output
export ROOT_PASSWORD=`cat virtualmaster_output | grep "Default password" | sed "s/^[^']*'\(.*\)'/\1/g"`
export SERVER_IP=`virtualmaster list | grep rendernow | cut -f4 -d"|" | tr -d " "`
sleep 30
sshpass -p "$ROOT_PASSWORD" scp -o 'HostKeyAlias rendernow' init_script.sh root@$SERVER_IP:~
sshpass -p "$ROOT_PASSWORD" ssh -o 'HostKeyAlias rendernow' root@$SERVER_IP ./init_script.sh
scp -o 'HostKeyAlias rendernow' host_script.sh mtbmap@$SERVER_IP:/home/mtbmap 
ssh -o 'HostKeyAlias rendernow' mtbmap@$SERVER_IP screen -L -d -m ./host_script.sh
ssh -o 'HostKeyAlias rendernow' mtbmap@$SERVER_IP "tail -f screenlog.0"
