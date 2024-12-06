#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    int n; cin >> n;
    vll glassesP((n+1)/2,0), glassesI((n+1)/2,0);
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if((i+1)&1) glassesI[i] = a;
        else  glassesP[i] = a;
    }
    vll accP(1 + (n+1)/2,0), accI(1 + (n+1)/2,0);
    for(int i = 1; i <= (n+1)/2; i++) accP[i] = accP[i-1] + glassesP[i-1];
    for(int i = 1; i <= (n+1)/2; i++) accI[i] = accI[i-1] + glassesI[i-1];
    for(int l = 1; l < (n+1)/2; l++){
        int r = (n+1)/2 - 1;
        while(l <= r){
            int mid = (l+r)/2;
            if() 
        }
    }
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
