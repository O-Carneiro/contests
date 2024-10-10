#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k, iniB, iniS; cin >> n >> k >> iniB >> iniS;
    iniB--; iniS--;
    vector<int> perm(n), arr(n);
    for(int i = 0; i < n; i++) cin >> perm[i], perm[i]--;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int pontosB = 0, pontosS = 0, maxB = 0, maxS = 0, kB = k, kS = k;
    int achouMaxB = 0, achouMaxS = 0, pB = iniB, pS = iniS;
    vector<bool> vis(n,false);
    int cont = 0;
    while(kB-- && !vis[pB]){
        vis[pB] = true;
        if(arr[pB] > maxB){
            achouMaxB = cont;
            maxB = arr[pB];
        }
        pB = perm[pB];
        cont++;
    }
    fill(vis.begin(),vis.end(),false);
    cont = 0;
    while(kS-- && !vis[pS]){
        vis[pS] = true;
        if(arr[pS] > maxS){
            achouMaxS = cont;
            maxS = arr[pS];
        }
        pS = perm[pS];
        cont++;
    }
    kB = k;
    pB = iniB;
    while(achouMaxB--){
        kB--;
        pontosB += arr[pB];
        pB = perm[pB];
    }
    if(kB) pontosB += kB * maxB; 
    kS = k;
    pS = iniS;
    while(achouMaxS--){
        kS--;
        pontosS += arr[pS];
        pS = perm[pS];
    }
    if(kS) pontosS += kS * maxS; 
    if(pontosB > pontosS) cout << "Bodya\n";
    else if(pontosB < pontosS) cout << "Sasha\n";
    else cout << "Draw\n";
    
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
