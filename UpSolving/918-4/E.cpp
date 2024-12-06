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
    vll nums(n);
    int flipFlop = 1;
    for(int i= 0; i < n; i++){
        cin >> nums[i];
        nums[i]*=flipFlop;
        flipFlop*=-1;
    }
    vll acc(n+1, 0);
    for(int i = 1; i <= n; i++) acc[i] = acc[i-1] + nums[i-1];
    sort(acc.begin(), acc.end());
    for(int i = 0; i < n; i++) {
        if(acc[i] == acc[i+1]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
