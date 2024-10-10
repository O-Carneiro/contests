#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<string> M(n);
    for(int i = 0; i < n; i++){
        cin >> M[i];
    }
    for(int i = 0; i < n; i+=k){
        for(int j = 0; j < n; j+=k){
            if(M[i][j] == '0') cout << '0';
            else cout << '1';
        }
        cout << '\n';
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
