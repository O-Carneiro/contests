#include <bits/stdc++.h>

#define MAC214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    bool flg = true;
    vector<int> arr(n);
    if(n > 2){cout << "NO\n"; flg = false;}
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(abs(arr[0] - arr[1]) > 1 && flg) cout << "YES\n";
    else if (flg) cout << "NO\n";
    return;
}

signed main(){
    MAC214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
