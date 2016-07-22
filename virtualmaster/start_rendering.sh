#!/bin/bash
server_name="rendernow"
/usr/local/bin/virtualmaster create $server_name --image 4299 --profile small --level personal | tee virtualmaster_output
export ROOT_PASSWORD=`cat virtualmaster_output | grep "Default password" | sed "s/^[^']*'\(.*\)'/\1/g"`
export SERVER_IP=`/usr/local/bin/virtualmaster list | grep " $server_name " | cut -f4 -d"|" | tr -d " "`
sleep 30
scp -o "HostKeyAlias $server_name" init_script.sh root@$SERVER_IP:~
ssh -o "HostKeyAlias $server_name" root@$SERVER_IP ./init_script.sh
scp -o "HostKeyAlias $server_name" host_script.sh mtbmap@$SERVER_IP:/home/mtbmap 
ssh -o "HostKeyAlias $server_name" mtbmap@$SERVER_IP screen -L -d -m ./host_script.sh
ssh -o "HostKeyAlias $server_name" mtbmap@$SERVER_IP "tail -f screenlog.0"
