#include <bits/stdc++.h>

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


void solve(){
    int n, m; cin >> n >> m;
    vvll adj(n);
    vpll grauS(n, {0,0});
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        u--, v--;
        grauS[u].first++, grauS[u].second = u;
        grauS[v].first++, grauS[v].second = v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vpll grau = grauS;
    sort(grauS.begin(), grauS.end());
    int y,x;
    //Sabemos que um vertice de menor grauS é uma folha, portanto 
    // pegamos seu unico vizinho que tem grauS y + 1
    int vertexY = adj[grauS[0].second][0];
    y = grau[vertexY].first - 1;
    //Agora escolhemos o viznho de vertexY que nao tem grauS 1, 
    //ele deve ser o vertice do meio com grauS X.
    for(int v : adj[vertexY]){
        if(grau[v].first > 1) {
            x = grau[v].first;
            break;
        }
    }
    cout << x << ' ' << y << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
