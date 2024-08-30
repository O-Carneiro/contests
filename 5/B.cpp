#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int len; cin >> len; 
    if(!(len & 1)) {
        cout << -1 << '\n';
        return;
    }
    vector<int> ans(len, '0');
    int l = 0, r= len-1;
    int w = 1;
    while(l <= r){
        ans[l++] = w++; 
        if(l <= r)
            ans[r--] = w++;
    }
    for(int i : ans)
        cout << i << ' ';
    cout << '\n';
    return;
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
