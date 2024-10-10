#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<bool> appeared(26,false);
    int baloons = 0;
    for(int i = 0; i < s.size(); i++){
        if(!appeared[s[i]-'A']){
            baloons++;
            appeared[s[i]-'A'] = true;
        }
        baloons++;
    }
    cout << baloons << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
