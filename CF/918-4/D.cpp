#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> C, V;
    C.insert({'b','c','d'});
    V.insert({'a','e'});
    vector<char> ans;
    for(int i = n-1; i >= 0; i--){
        if(V.find(s[i]) != V.end()){
            ans.push_back(s[i--]);
            ans.push_back(s[i]);
            if(i > 0) ans.push_back('.');
        }
        else if(C.find(s[i]) != C.end()){
            ans.push_back(s[i--]);
            ans.push_back(s[i--]);
            ans.push_back(s[i]);
            if(i > 0) ans.push_back('.');
        }
    }
    reverse(ans.begin(),ans.end());
    for(char i : ans) cout << i;
    cout << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
