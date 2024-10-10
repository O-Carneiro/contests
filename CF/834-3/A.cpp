#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;
void solve(){
    string str;
    cin >> str;
    char Yes[3] = {'Y', 'e', 's'};
    int pointer;
    if(str[0] == 'Y') pointer = 0;
    else if(str[0] == 'e') pointer = 1;
    else if(str[0] == 's') pointer = 2;
    else {cout << "NO\n"; return;}
    for(int i = 1; i < str.size(); i++){
        if(str[i] != Yes[++pointer % 3]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
