#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int m, s; cin >> m >> s;
    set<int> conj;
    int minimo = 50, maximo = 0;
    for(int i = 0; i < m; i++){
        int aux; cin >> aux;
        maximo = max(aux,maximo);
        minimo = min(aux,minimo);
        conj.insert(aux);
    }
    int soma = 0;
    int num = 0;
    while(soma < s){
        if(conj.find(++num) == conj.end()){
            soma+= num;
            conj.insert(num);
        }
        maximo = max(num,maximo);
        minimo = min(num,minimo);
    }

    if(soma == s) {
        for(int i = 1; i < maximo; i++){
            if(conj.find(i) == conj.end()){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else cout << "NO\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
