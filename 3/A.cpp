#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    string t; cin >> t;
    if(t.size() < 3){cout << "NO\n"; return;}
    if(t[0] != '1' || t[1] != '0' || t[2] == '0'){ cout << "NO\n"; return;}
    t.erase(0,2);
    int num = stoll(t);
    if(num < 2) { cout << "NO\n"; return;}
    cout << "YES\n";
    return;
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
