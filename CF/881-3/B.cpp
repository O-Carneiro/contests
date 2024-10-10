#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, ans = 0, cont = 0; cin >> n;
    vector<int> vec(n);
    bool flag = false;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        if(vec[i] < 0){
            if(!flag)cont++;
            ans += -vec[i];
            flag = true;
        }
        if(vec[i] > 0){
            if(flag) flag = false;
            ans += vec[i];
        }
    }
    cout << ans << ' ' << cont << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
