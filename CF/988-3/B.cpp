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
    int k; cin >> k;
    map<int,int> mp;
    for(int i = 0; i < k; i++){
        int a; cin >> a;
        if(mp.find(a) == mp.end()){
            mp[a] = 1;
        }
        else {
            mp[a]++;
        }
    }
    int dim = k-2;
    for(map<int,int>::iterator i=mp.begin(); i != mp.end(); i++){
        int mod = dim % i->first;
        int res = dim / i->first;
        if(mod == 0){
            if(res == i->first && mp[res] >= 2){
                cout << res << ' ' << res << '\n';
                return;
            }
            if(mp.find(res) != mp.end()){
                cout << res << ' ' << i->first <<'\n';
                return;
            }
        }
    }
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
