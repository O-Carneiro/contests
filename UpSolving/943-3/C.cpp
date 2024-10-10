#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n,0), x(n); a[0] = 1000; 
    for(int i = 0; i < n-1; i++) cin >> x[i];
    for(int i = 1; i < n; i++){
        a[i] = a[i-1] + x[i-1];
    }
    for(int i : a) cout << i << ' ';
    cout << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
