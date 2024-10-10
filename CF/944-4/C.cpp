#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int a, b, c ,d; cin >> a >> b >> c >> d;
    int red[2] = {min(a,b), max(a,b)};
    int blue[2] = {min(c,d), max(c,d)};
    if(red[0] < blue[0]){
        if(red[1] < blue[1] && red[1] > blue[0])
            cout << "YES\n";
        else cout << "NO\n";
    }
    else if(blue[0] < red[0]){
        if(blue[1] < red[1] && blue[1] > red[0])
            cout << "YES\n";
        else cout << "NO\n";
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
