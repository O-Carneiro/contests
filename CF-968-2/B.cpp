#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> seq(n);
    for(int i = 0; i < n; i++) cin >> seq[i];
    sort(seq.begin(), seq.end());
    cout << seq[n/2] << '\n';
}
signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
