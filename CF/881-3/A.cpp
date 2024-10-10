#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){  
    int n;cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int ans = 0;
    for(int i = 0; i < n/2; i++)
        ans += -vec[i] + vec[n-1-i];

    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
