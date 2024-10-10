#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;
    vector<vector<int>> contA(26,vector<int>(n+1,0)),contB(26,vector<int>(n+1,0));
    for(int i = 1; i <= n; i++){
        contA[a[i-1]-'a'][i] = 1;
        contB[b[i-1]-'a'][i] = 1;
    }
    for(int i = 0; i < 26; i++){
        for(int j = 1; j <= n; j++){
            contA[i][j]+= contA[i][j-1];
            contB[i][j]+= contB[i][j-1];
        }
    }
    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        int diff = 0;
        for(int j = 0; j < 26; j++){
            diff+=abs((contA[j][r] - contA[j][l-1]) - (contB[j][r] - contB[j][l-1]));
        }
        cout << diff/2 << '\n';
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
