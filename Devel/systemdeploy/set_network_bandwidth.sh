WONDERSHAPER=/home/mtbmap/wondershaper/wondershaper

if [ "$1" == "remove" ]; then
    echo "Remove limit"
    ${WONDERSHAPER} -c -a eno1
else
    echo "Add limit"
    ${WONDERSHAPER} -c -a eno1
    ${WONDERSHAPER} -a eno1 -u 8192 -d 8192
fi
