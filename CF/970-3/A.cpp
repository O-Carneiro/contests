#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    if(a%2!=0) cout << "NO\n";
    else if(b%2 == 0) cout << "YES\n";
    else {
        if(a >= 2) cout << "YES\n";
        else cout << "NO\n";
    } 
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
