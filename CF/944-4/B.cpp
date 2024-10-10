#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    string s; cin >> s;
    bool flg = true;
    int index;
    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1]){
            char aux = s[i];
            s[i] = s[i-1];
            s[i-1] = aux;
            cout << "YES\n" << s << '\n';
            return;
        }
    }
    cout << "NO\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
