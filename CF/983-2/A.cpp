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
    int nUns = 0, nZeros = 0;
    for(int i = 0; i < 2*n; i++){
        int num; cin >> num;
        if(num) nUns++;
        else nZeros++;
    }
    int minimo = (nUns%2);
    int maximo = (nUns > nZeros)? nZeros : nUns;
    cout << minimo << ' ' << maximo << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
