#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    set<string> ss;
    map<int,string> mp;
    string ans(n,'0');
    for(int i = 0; i < n; i++){ 
        string aux;
        cin >> aux;
        ss.insert(aux);
        mp.insert({i, aux});
    }
    for(int i = 0; i < n; i++){
        string pre, suf;
        for(int j = 1; j < mp[i].size();j++){
            pre = mp[i];suf = mp[i];
            pre.erase(j,mp[i].size()-j);
            suf.erase(0,j);
            if(ss.find(pre) != ss.end() && ss.find(suf) != ss.end()){
                ans[i] = '1';
                break;
            }
        }
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
