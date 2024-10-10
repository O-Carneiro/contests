#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    string s;cin >> s;

    if(s[0] != 'y' && s[0] != 'Y') {cout << "NO\n"; return;}
    if(s[1] != 'e' && s[1] != 'E') {cout << "NO\n"; return;}
    if(s[2] != 's' && s[2] != 'S') {cout << "NO\n"; return;}

    cout << "YES\n";
    return;
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
