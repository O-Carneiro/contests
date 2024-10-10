#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int contazeros(int n){
    int cont = 0;
    while(n % 10 == 0 && n > 0){
        n/=10;
        cont++;
    }
    return cont;
}

void solve(){
    int n, m; cin >> n >> m;
    int nxZeros = contazeros(n);
    int pot2 = 0, pot5 = 0;
    int cont = 0;
    int aux = n;
    while(aux > 0) {
        if(aux%5==0) {aux/=5; pot5++;}
        else if(aux%2==0) {aux/=2; pot2++;}
        else break;
    }
    while(pot2 > pot5){
        if(m/5) m/=5, pot5++;
        else break;
    }
    while(pot5 > pot2){
        if(m/2) m/=2, pot2++;
        else break;
    }
    while(m/10) m/=10, pot2++, pot5++;
    int res = m*aux*(int)pow(2,pot2)*(int)pow(5,pot5);
    cout << res << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
