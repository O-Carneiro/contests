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
int m;
bool solveR(int n){
    if(n % 3 != 0) return false;
    int div = n/3;
    if(div == m || div*2 == m) return true;
    else return(solveR(div) || solveR(div*2));
}

void solve(){
    int n; cin >> n >> m;
    if(n == m){
        cout << "YES\n";
        return;
    }
    if(solveR(n)) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
