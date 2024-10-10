#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    int maxi, max = 0;
    vector<int> vec(n+1);
    vector<int> count(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> vec[i];
        count[vec[i]]++;
    }
    for(int i = 1; i <= n; i++) {
        if(count[i] > max){
            max = count[i];
            maxi = i;
        }
    }
    cout << n - count[maxi] << '\n';

    return;
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
