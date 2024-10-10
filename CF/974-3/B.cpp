#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    int flgN =((n+1)/2) % 2;
    int flgK =((n-k+1)/2) % 2;
    if(!flgN && !flgK) cout << "YES\n";
    else if(flgN && !flgK) cout << "NO\n";
    else if(!flgN && flgK) cout << "NO\n";
    else cout << "YES\n";
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
