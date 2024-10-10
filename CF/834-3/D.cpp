#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

pair<int,int> contazeros(int n){
    int cont = 0;
    while(n % 10 == 0 && n > 0){
        n/=10;
        cont++;
    }
    return {cont, n%10};
}
int contadigitos(int n){
    int cont = 0;
    while(n > 0){
        n/=10;
        cont++;
    }
    return cont;
}

void solve(){
    int n, m; cin >> n >> m;
    pair<int,int> ret;
    ret = contazeros(n);
    int nxZeros = ret.first, firstInteiro = ret.second;
    int mDigitos = contadigitos(m);
    int maxDigitos = contadigitos(n*m);
    int res = n*m;
    int maxPot = mDigitos - 1;

    cout << res << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
