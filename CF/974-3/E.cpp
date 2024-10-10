#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;
const int MAX = 1e6;
const int oo = 1e9;
int distRobin[MAX];
int distMarian[MAX];
vector<vector<pair<signed,int>>>adj;
vector<bool>horsesMarian, horsesRobin;
vector<bool>horsies;

void dijkstra(int src, int n, int *dist, vector<bool> &horses){
	for(int i=1; i<=n; i++) dist[i] = oo;
	set<pair<int,signed>> st;
	st.insert({0, src});
	dist[src] = 0;

	while(!st.empty()){
		int cur = st.begin()->second; st.erase(st.begin());
		for(auto [viz, c] : adj[cur]){
            if(horses[cur]){
                c /=2;
            }
            
			if(dist[cur] + c < dist[viz]){
                horses[viz] = true;
				st.erase({dist[viz], viz});
				dist[viz] = dist[cur] + c;
				st.insert({dist[viz], viz});
			}

		}
	}
}

void dijkstraHorses(int src, int n, int *dist, vector<bool> &horses){
	for(int i=1; i<=n; i++) dist[i] = oo;
	set<pair<int,signed>> st;
	st.insert({0, src});
	dist[src] = 0;

	while(!st.empty()){
		int cur = st.begin()->second; st.erase(st.begin());
		for(auto [viz, c] : adj[cur]){
			if(dist[cur] + c < dist[viz]){
                horses[viz] = true;
				st.erase({dist[viz], viz});
				dist[viz] = dist[cur] + c;
				st.insert({dist[viz], viz});
			}

		}
	}
}
void solve(){
    int n, m, h; cin >> n >> m >> h;
    adj.resize(n+1);
    horsies.resize(n+1);
    horsesMarian.resize(n+1);
    horsesRobin.resize(n+1);
    for(int i = 0; i < h; i++){
        int v; cin >> v;
        horsies[v] = true;
    }
    for(int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    dijkstra(1, n, distMarian, horsesMarian);
    dijkstra(n, n, distRobin, horsesRobin);
    for(int i = 1; i <=n; i++){
        if(horsies[i]){
            if(distRobin[i] < distMarian[i])
                horsesRobin[i] = true;
            if(distRobin[i] >= distMarian[i])
                horsesMarian[i] = true;
        }
    }
    dijkstra(1, n, distMarian, horsesMarian);
    dijkstra(n, n, distRobin, horsesRobin);
    for(int i = 1; i < n; i++) cout << distMarian[i] << ' ';
    cout << '\n';
    for(int i = 1; i < n; i++) cout << distRobin[i] << '\n';
    cout << '\n';
    bool meet = false;
    for(int i = 1; i <= n; i++){
        if(distRobin[i] < oo && distMarian[i] < oo)
            meet = true;
    }
    if(!meet){cout << "-1\n"; return;}
    int minimo = oo;
    for(int i = 1; i <= n; i++){
        if(max(distMarian[i], distRobin[i]) < minimo)
            minimo = max(distMarian[i], distRobin[i]);
    }
    cout << minimo << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
