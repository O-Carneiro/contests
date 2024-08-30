#include <bits/stdc++.h>

#define MAC214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int al, ar, bl, br;
    cin >> al >> ar >> bl >> br;
    int lock = 0;

    if(al > br || bl > ar) lock = 1;
    else{
        vector<int> a(102);
        vector<int> b(102);
        a[al] = 1; a[ar+1] = -1;
        b[bl] = 1; b[br+1] = -1;
        for(int i = 2; i < 102; i++){
           a[i] = a[i] + a[i-1]; 
           b[i] = b[i] + b[i-1]; 
        }
        for(int i = 1; i <= 100; i++)
            if(a[i] && b[i+1]) lock++;
            else if(a[i+1] && b[i]) lock++;
    }

    cout << lock << '\n';
}

signed main(){
    MAC214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
