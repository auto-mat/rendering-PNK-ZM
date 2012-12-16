#!/bin/bash
for png in `find tiles_PNK/ -name "*.png"`;
do
  re="^([^/]+)/(.*)/([^/]+)$"
  [[ $png =~ $re ]] && dir="${BASH_REMATCH[2]}" && file="${BASH_REMATCH[3]}"
  pngBW="tiles_PNK_BW/$dir/$file"
  if [ -f $pngBW ]; then
    echo "file $pngBW already exists"
  else
    dirBW="tiles_PNK_BW/$dir"
    mkdir -p $dirBW
    convert "$png" -verbose -colorspace HSL -modulate 100,50 "$pngBW"
  fi
done;
