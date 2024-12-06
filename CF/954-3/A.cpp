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
    int x1, x2, x3; cin >> x1 >> x2 >> x3;
    int minV = 1e9;
    for(int i = 1; i <= 10; i++){
        minV = min(minV ,abs(i-x1) + abs(i-x2) + abs(i-x3));
    }
    cout << minV << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
