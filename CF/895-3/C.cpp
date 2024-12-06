#include <bits/stdc++.h>
#include <numeric>
#include <vector>

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

int compositeFactor(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return i;
        }
    }
    return 0;
}

void solve(){
    int l, r; cin >> l >> r;
    if(r <= 3){cout << "-1\n"; return;}
    int a, b;
    bool solved = false;
    for(int i = l; i<=r; i++){
        int ans = compositeFactor(i);
        if(ans > 0){
            a = i-ans;
            b = ans;
            solved = true;
            break;
        }
    }
    if(solved) cout << a << ' ' << b << '\n'; 
    else cout << "-1\n";
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
