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
    vector<int> topics(n, 0);
    for(int i = 0; i < n; i++) cin >> topics[i];
    for(int i = 1; i < n/2; i++){
        if(topics[i]==topics[i-1]) swap(topics[i], topics[n-i-1]);
        else if(topics[n-i-1]==topics[n-i]) swap(topics[i], topics[n-i-1]);
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++)
        if(topics[i] == topics[i+1]) ans++;
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
