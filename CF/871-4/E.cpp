#include <bits/stdc++.h>
#include <cstdio>

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


int dfs(int i, int j, int vol, vvll &lake, vvll &vis){
    vis[i][j] = 1;
    if(lake[i-1][j] && !vis[i-1][j]) vol = dfs(i-1,j, vol, lake, vis);
    if(lake[i+1][j] && !vis[i+1][j]) vol = dfs(i+1,j, vol, lake, vis); 
    if(lake[i][j-1] && !vis[i][j-1]) vol = dfs(i,j-1, vol, lake, vis);
    if(lake[i][j+1] && !vis[i][j+1]) vol = dfs(i,j+1, vol, lake, vis);
    vol += lake[i][j];
    return vol;
}

void solve(){
    int n, m; cin >> n >> m;
    vvll lake(n+2, vll(m+2, 0));
    vvll vis(n+2, vll(m+2, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> lake[i][j];
        }
    }
    int maxVol = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(lake[i][j] && !vis[i][j])maxVol = max(maxVol, dfs(i,j, 0, lake, vis));
        }
    }
    cout << maxVol << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
