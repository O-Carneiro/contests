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
    vector<vector<int>> mountains(n, vector<int>(n));
    vll minimos(3*n-1, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mountains[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            minimos[n+j-i] = min(minimos[n+j-i], mountains[i][j]);
        }
    }
    cout << -1 * accumulate(minimos.begin(), minimos.end(), 0) << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
