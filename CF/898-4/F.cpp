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
    int n, k; cin >> n >> k;
    vll apples(n), heights(n);
    for(int &i : apples) cin >> i;
    for(int &i : heights) cin >> i;
    int l, r, maxlen, stolen;
    l = r = 0;
    maxlen = 0, stolen = apples[l];
    while(r < n && l < n){
        while(r < n-1 && heights[r] % heights[r+1] == 0){
            stolen+=apples[++r];
            while(stolen > k)stolen-=apples[l++];
            maxlen = max(maxlen, r - l + 1);
        }
        r++, l=r;
        if(l < n) stolen = apples[l];
    }
    if(n == 1 && apples[0] <= k) maxlen = 1; 
    cout << maxlen << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
