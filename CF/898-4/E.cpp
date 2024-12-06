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

int how_much_water(vll &a, int h){
    int ret = 0;
    for(int i : a){
        ret += max((int)0, h-i);
    }
    return ret;
}

void solve(){
    int n, x; cin >> n >> x;
    vll a(n);
    for(int &i : a) cin >> i;
    int l, r;
    l = 2, r = 2e9+500;
    int mid, water;
    while(l<=r){
        mid = (l+r)/2;
        water = how_much_water(a, mid);
        if(water == x) break;
        else if(water < x) l = mid + 1;
        else r = mid - 1;
    }
    if(water > x) mid--;
    cout << mid << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
