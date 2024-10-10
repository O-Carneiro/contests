#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    int pa = 0, pb = 0;
    int cont = 0, maximo = 0;
    while(pb < m){
        if(a[pa] == b[pb]){
            cont++;
            pa++;
            if(cont == n) break;
        }
        pb++;
    }
    cout << cont << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
