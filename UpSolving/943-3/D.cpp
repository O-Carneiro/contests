#include <bits/stdc++.h>

#define MAC214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k, pB, pS; cin >> n >> k >> pB >> pS;
    pB--, pS--;
    vector<int> perm(n), arr(n), vis(n, 0);
    multiset<int> pointsB, pointsS;
    for(int i = 0; i < n; i++) cin >> perm[i], perm[i]--;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int kB = k, kS = k;
    int pathB = 0, pathS = 0;//Pontos acumulados no caminho
    while(!vis[pB] && kB){
        vis[pB] = 1;
        pointsB.insert(arr[pB]*kB-- + pathB);
        pathB += arr[pB];
        pB = perm[pB];
    }
    fill(vis.begin(), vis.end(), 0);
    while(!vis[pS] && kS){
        vis[pS] = 1;
        pointsS.insert(arr[pS]*kS-- + pathS);
        pathS += arr[pS];
        pS = perm[pS];
    }
    int maxB = *(--pointsB.end()), maxS = *(--pointsS.end());
    if(maxB > maxS) cout << "Bodya\n";
    else if(maxB < maxS) cout << "Sasha\n";
    else cout << "Draw\n";
    
}

signed main(){
    MAC214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
