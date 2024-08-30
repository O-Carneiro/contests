#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int achaPrimeiroDivisor(int coord, int k){
    for(int i = coord; i > 0; i--){
        if(k % i == 0){
            return i;
        }
    }
    return k;
}

void solve(){
    int x,y,z,k; cin >> x >> y >> z >> k;
    if(x*y*z < k){
        cout << "0\n";
        return;
    }
    int zS;
    int maximo = 0;
    for(int i = 1; i <= x; i++)
        for(int j = 1; j <= y; j++){
            zS = (k/i)/j;
            if(i * j * zS == k && zS <= z){
                int conta = (x-i+1)*(y-j+1)*(z-zS+1);
                maximo = max(maximo, conta);
            }
        }

    cout << maximo << '\n';

}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
