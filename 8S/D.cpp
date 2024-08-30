#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<string> grid(n);
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    int column, line;
    bool achou = false;
    int i;
    for(i = 0; i < n; i++){
        int cont = 0;
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '#') {
                column = j;
                achou = true;
                break;
            }
        } 
        if(achou) break;
    }
    line = i;
    // cout << "i: " << i << endl;
    // cout << "j: " << column << endl;
    while(i < n && grid[i][column] == '#'){
        i++;
        if(i >= n) break;
    }
    cout << line + (i - line)/2 + 1 << ' ' << column + 1 << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
