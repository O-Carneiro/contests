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

int bs(int a1, int r, int s, int n){
    int l = a1; 
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if(n*(a1+mid)/2 < s) r = mid - 1;
        else if(n*(a1+mid)/2 > s) l = mid + 1;
        else return mid; }
    }
    return 0;
}

void solve(){
    int a, s, l, r; cin >> a >> s >> l >> r;
    vll enes;
    int ans = 0;
    for(int i = l; i <=r; i++) if((s*2) % i == 0) enes.push_back(i);
    for(int i = l; i <=r; i++){
        for(int n : enes){
            int a1 = i, an;
            an = bs(a1, r, s, n);
            if(an) ans++;
        }
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t=1;
    while(t--) solve();
    return 0;
}
