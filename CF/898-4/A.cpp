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
    int cont =0;
    if(s[0]!= 'a') cont++;
    if(s[1]!= 'b') cont++;
    if(s[2]!= 'c') cont++;

    if(cont > 2) cout << "NO\n";
    else cout << "YES\n";
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
