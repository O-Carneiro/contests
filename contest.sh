#!/bin/bash

for i in ./*; do
    if [ ! -s "$i" ]; then
        echo "Writing $i"
        mv "$i" "$i.cpp"
        $(cat ~/Desktop/contests/template.cpp >> "$i.cpp")
    fi
done
exit 0


