#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m; 
    vector<vector<int>> seqs(n);
    vector<int> maximos(n, -1);
    //
    // cout << "n: " << n << '\n';
    // cout << "m: " << m << '\n';
    for(int i = 0; i < n; i++){
        int l; cin >> l;
        for(int j = 0; j < l; j++){
            int number; cin >> number;
            seqs[i].push_back(number);
        }
        sort(seqs[i].begin(), seqs[i].end());
    }
    for(int i = 0; i < n; i++){
        bool tapouBuraco = false;
        int buracoNum = 0;
        for(int j = 0; j < seqs[i].size(); j++){
            if(seqs[i][j] < buracoNum) continue;
            if(seqs[i][j] == buracoNum){
                buracoNum++;
            }
            //seqs[i][j] > buracoNum
            else {
                if(tapouBuraco) break;
                else {
                    tapouBuraco = true;
                    buracoNum++;
                    j--;
                }
            }
        }
        if(!tapouBuraco) buracoNum++;
        maximos[i] = buracoNum;
    }
    // for(auto i: maximos) cout << i << ' '; 
    // cout << '\n';
    sort(maximos.begin(), maximos.end());
    int max = maximos[maximos.size()-1];
    // cout << "max: " << max << '\n';
    // cout << "conta: " << ((max + m)*(m-max+1))/2 << '\n';
    int ans;
    cout << ans << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
