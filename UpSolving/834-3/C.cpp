#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int l, r, x; cin >> l >> r >> x;
    int a, b; cin >> a >> b;
    int jumps = 0;
    if(a == b) jumps = 0; 
    else if((abs(l-b) < x && abs(r-b) < x) || (abs(l-a) < x && abs(r-a) < x)) jumps = -1;
    else if(abs(b-a) >= x)jumps = 1;
    else if((abs(b-l) >= x && abs(l-a) >=x) ||(abs(b-r) >= x && abs(r-a) >=x)) jumps = 2;
    else jumps = 3;

    cout << jumps << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
