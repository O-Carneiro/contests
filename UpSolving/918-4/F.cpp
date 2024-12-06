#include <algorithm>
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
    map<int,int> mp;
    vll bs(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        mp[a] = b;
        bs[i] = b;
    }
    int ans = 0;
    sort(bs.begin(),bs.end());
    for(auto &mpi : mp){
        auto pos = lower_bound(bs.begin(), bs.end(), mpi.second);
        ans += pos - bs.begin();
        bs.erase(pos);
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
