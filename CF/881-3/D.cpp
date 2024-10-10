#include <bits/stdc++.h>
#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
#define pb push_back
using namespace std;
void dfs(int cur, vector<int> &folhas, vector<vector<int>> &tree, vector<bool> &vis, vector<int> &relacoes){
    vis[cur] = true;
    if(relacoes[cur] == 1) {folhas[cur] = 1; return;}
    for(auto viz : tree[cur]){
        if(!vis[viz]){
            dfs(viz, folhas, tree,vis, relacoes);
            folhas[cur]+=folhas[viz];
        }
    }
    return;
}
void solve(){
    int n; cin >> n;
    vector<vector<int>> tree(n+1);
    vector<int> relacoes(n+1,0);
    vector<int> folhas(n+1,0);
    vector<bool> vis(n+1,false);
    for(int i = 0; i < n-1; i++) {
        int a,b; cin >> a >> b;
        tree[b].pb(a);
        tree[a].pb(b);
        relacoes[a]++;
        relacoes[b]++;
    }
    relacoes[1]++;
    dfs(1, folhas, tree, vis, relacoes);
    int q; cin >> q;
    while(q--){
        int u, v; cin >> u >> v;  
        cout << folhas[u] * folhas[v] << '\n';
    }
}
signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
