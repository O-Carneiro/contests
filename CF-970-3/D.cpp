#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int dfs(int n, int blacks, vector<int> &perm, vector<int> &pd,
        vector<int> &visited, string &colors){
    visited[n] = 1;
    if(colors[n-1] == '0') pd[n]++;
    pd[n]+= blacks;
    if(!visited[perm[n]])
        pd[n] = dfs(perm[n], pd[n], perm, pd, visited, colors);
    return pd[n];
}

void solve(){
    int n; cin >> n;
    vector<int> perm(n+1), pd(n+1,0), visited(n+1,0); 
    for(int i = 1; i <= n; i++) cin >> perm[i];
    string colors; cin >> colors;

    for(int i = 1; i <= n; i++){
        if(!visited[i])
            pd[i] = dfs(perm[i], 0, perm, pd, visited, colors);
        
        cout << pd[i]  << ' ';
    }
    cout << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
