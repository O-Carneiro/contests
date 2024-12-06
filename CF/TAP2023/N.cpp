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
    vll v(5);
    int soma = 0;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x; x %= 5;
        if(x) v[x]++;
        else soma++;
    }
    
    

    cout << soma << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t = 1;
    while(t--) solve();
    return 0;
}
