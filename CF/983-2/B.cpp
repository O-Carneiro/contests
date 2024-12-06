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
    int n, k; cin >> n >> k;
    int r = k, l = k;
    if(k - 1 == n - k) {cout << "1\n1\n"; return;}
    while(l > 1 && r < n){
        if((l - 1) & 1 && (n - r) & 1){
            cout << "3\n" <<"1 " << l << ' ' << r+1 << '\n';
            return;
        }
        if(!((l - 1) & 1)) l--;
        if(!((n - r) & 1)) r++;
    }
    cout << -1 << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
