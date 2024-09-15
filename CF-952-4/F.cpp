#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int h, n; cin >> h >> n;
    vector<int> a(n), c(n), t(n,1);
    set<tuple<int,int,int>> attacks;
    int cont = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < n; i++) attacks.insert({1,a[i],c[i]});
    for(auto i: attacks){
        cout << "when: " << get<0>(i) << '\n';
        cout << "how much: " << get<1>(i) << '\n';
        cout << "space: " << get<2>(i) << '\n';
    }
    while(h > 0){
        tuple<int,int,int> attack = *attacks.begin();
        // cout << "health: " << h << '\n';
        // cout << "turn: " << get<0>(attack) << '\n';
        // cout << "damage: " << get<1>(attack) << '\n';
        // cout << "cooldown: " << get<2>(attack) << '\n';
        cont = get<0>(*attacks.begin());
        get<0>(attack) = cont+get<2>(*attacks.begin());
        h -= get<1>(*attacks.begin());

        attacks.erase(attacks.begin());
        attacks.insert(attack);
        for(auto i: attacks){
            cout << "when: " << get<0>(i) << '\n';
            cout << "how much: " << get<1>(i) << '\n';
            cout << "space: " << get<2>(i) << '\n';
        }
    }
    cout << cont << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
