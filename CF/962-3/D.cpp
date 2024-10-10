#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int resSoma = 0, resProd = 0;
    for(int i = 1; i < x - 1; i++){
        resSoma += (x-2)*(x-1)/4;
    } 
    cout << resSoma << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
