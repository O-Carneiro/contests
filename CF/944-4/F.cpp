#include <bits/stdc++.h>
#include <cmath>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

double dist(int x, int y){
    return sqrt(x*x + y*y);
}

void solve(){
    int r;cin >> r;
    int cont = 0;
    for(int y = 0; y < r+1; y++)
        for(int x = sqrt(r*r - y*y); dist(x,y) < r+1; x++){
            if(dist(x,y) >= r && dist(x,y) < r+1) cont++;
        }
    cout << (cont-2) * 4 + 4<< '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
