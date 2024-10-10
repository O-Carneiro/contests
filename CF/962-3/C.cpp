#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;
    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        vector<int> letrasA(26,0), letrasB(26,0);
        for(int j = l-1; j < r; j++){
            letrasA[(int)(a[j]) - (int)'a']++;
            letrasB[(int)(b[j]) - (int)'a']++;
        }
        int diff = 0;
        for(int j = 0; j < 26; j++){
            diff += abs(letrasA[j] - letrasB[j]);
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
