#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    int cont = 0;
    for(int a = 1; a <= x-2; a++){
        for(int b = 1; b*a <= n-2; b++){
            int c1 = x-a-b, c2=(n-(a*b))/(a+b);
            if(c1>0 && c2>0)
                cont += min(c1,c2);
        }
    }
    cout << cont << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
