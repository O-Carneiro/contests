#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, d, k; cin >> n >> d >> k;
    vector<int> started(n+2,0), ended(n+2,0);
    for(int i = 0; i < k; i++){
        int l, r; cin >> l >> r;
        started[l] += 1;
        ended[r+1] += 1;
    }
    for(int i = 2; i <=n; i++){
        started[i] += started[i-1];
        ended[i] += ended[i-1];
    }
    int brodi, moder, maximo = -1, minimo = 1e9;
    for(int i = d; i <=n; i++){
        int distinctJobs = started[i] - ended[i-d+1];
        if(distinctJobs > maximo){
            brodi = i - d + 1;
            maximo = distinctJobs;
        } 
        if(distinctJobs < minimo){
            moder = i - d + 1;
            minimo = distinctJobs;
        } 
    }
    cout << brodi << ' ' << moder << '\n';

}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
