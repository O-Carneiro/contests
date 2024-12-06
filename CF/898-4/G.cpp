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
    string s; cin >> s;
    vll as, bs;
    int numBI = 0;
    int i = 0;
    while(i < s.size()){
        int cont = 0;
        while(i < s.size() && s[i] == 'B'){i++; }
        numBI++;
        while(i < s.size() && s[i] == 'A'){ cont++; i++; }
        as.push_back(cont);
    }
    sort(as.begin(), as.end());
    int ans = accumulate(as.begin(),as.end(),0);
    if(numBI == 0 || ans == 0) {cout << 0 << '\n'; return;};
    if(numBI < as.size()) ans -= as[0];
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
