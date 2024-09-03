#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < 4; j++){
            if(s[j] == '#'){
                ans.push_back(j+1);
            }
        }
    }
    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
