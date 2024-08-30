#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int a,b,c; cin >> a >> b >> c;
    if(a < b && b < c) cout << "STAIR\n";
    else if(a < b && b > c) cout << "PEAK\n";
    else cout << "NONE\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
