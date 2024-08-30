#!/bin/bash

for i in ./*; do
    if [ ! -s "$i" ]; then
        echo "Writing $i"
        mv "$i" "$i.cpp"
        echo "#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

signed main(){
    MAC0214 coxa

    return 0;
}" >> "$i.cpp"
    fi
done
exit 0


