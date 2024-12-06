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
    int n, m, L; cin >> n >> m >> L;
    vector<int> hurdlesL;
    vll chokes;
    for(int i =0; i < n; i++){
        int l,r; cin >> l >> r;
        chokes.push_back(r-l+2);
        hurdlesL.push_back(l);
    }
    vpll pw;
    for(int i =0; i < m; i++){
        int pos,v; cin >> pos >> v;
        pw.push_back({pos,v});
    }
    
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
