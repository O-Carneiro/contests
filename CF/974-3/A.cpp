#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int gold = 0;
    int cont = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a >= k)gold+=a;
        else if(gold > 0 && !a) gold--, cont++;
    }
    cout << cont << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
