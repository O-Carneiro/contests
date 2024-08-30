#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    string a, b;
    char aux;
    cin >> a >> b;
    aux = a[0];
    a[0] = b[0];
    b[0] = aux;
    cout << a << ' ' << b << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
}
