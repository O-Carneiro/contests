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
    int n, x, y; cin >> n >> x >> y;
    int mmc = lcm(x,y);
    int mmcSums = n/mmc;
    int xSums = n/x - mmcSums;
    int ySums = n/y - mmcSums;
    int xFactor = (((n-xSums+1)+n)*xSums)/2;
    int yFactor = ((1+ySums)*ySums)/2;
    cout << xFactor - yFactor << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
