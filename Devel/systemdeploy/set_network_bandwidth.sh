WONDERSHAPER=/home/mtbmap/wondershaper/wondershaper

if [ "$1" == "remove" ]; then
    echo "Remove limit"
    ${WONDERSHAPER} -c -a eno1
else
    echo "Add limit"
    ${WONDERSHAPER} -c -a eno1
    ${WONDERSHAPER} -a eno1 -u 20480 -d 32768
fi
