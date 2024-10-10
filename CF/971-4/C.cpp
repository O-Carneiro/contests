#include <bits/stdc++.h>
 
#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;
 
void solve(){
    int x, y, k; cin >> x >> y >> k;
    int ans = 0;
    if(x > y){
        ans = (2*(x/k)) - 1;
        if(x % k != 0) ans += 2;
    }
    else{
        ans = 2*(y/k);
        if(y % k != 0) ans += 2;
    }
    cout << ans << '\n';
}
 
signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
