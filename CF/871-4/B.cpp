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
    vll v(n);
    int comp = 0;
    int maxComp = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a == 0){
            comp++;
        }
        else {
            maxComp = max(comp, maxComp);
            comp = 0;
        }
    }
    maxComp = max(comp,maxComp);
    cout << maxComp << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
