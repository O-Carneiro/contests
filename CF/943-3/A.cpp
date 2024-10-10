#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int x; cin >> x;
    int maximo = 0;
    int y = 0;
    for(int i = 1; i < x; i++){
        int div = gcd(i,x);
        if(div + i > maximo){
            maximo = div + i;
            y = i;
        }

    }
    cout << y << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
