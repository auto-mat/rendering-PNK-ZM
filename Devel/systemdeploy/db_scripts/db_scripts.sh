#!/run/current-system/sw/bin/bash -e
./relations2lines.py
./relations2stations.py
./cycle_relations2lines.py
./name_shortcuts.py
./make_indices.py
