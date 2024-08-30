#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(s[0] != s[n-1]) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
}
