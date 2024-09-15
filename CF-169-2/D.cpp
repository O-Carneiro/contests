#include <bits/stdc++.h>

#define MAC214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    set<int> blue, red, green, yellow;
    int n, q; cin >> n >> q;
    for(int i = 0; i < n; i++){
        vector<char> portals(2);
        cin >> portals;
        if(portals[0] == 'B' || portals[1] == 'B')
            blue.insert(i);
        if(portals[0] == 'G' || portals[1] == 'G')
            blue.insert(i);
        if(portals[0] == 'R' || portals[1] == 'R')
            blue.insert(i);
        if(portals[0] == 'Y' || portals[1] == 'Y')
            blue.insert(i);
    }
}

signed main(){
    MAC214 coxa
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
