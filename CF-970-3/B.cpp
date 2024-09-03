#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int ehQuadradoPerfeito(int n){
    for(int i = 2; i*i <= 2*10e5; i++)
        if(i*i == n) return i;
    return 0;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int root = ehQuadradoPerfeito(n);
    if(!root) cout << "NO\n";
    else{
        for(int i = 0; i < root; i++){
            if(s[i] == '0'){
                cout << "NO\n";
                return;
            }
        }
        for(int i = 1; i < root-1; i++){
            for(int j = 1; j < root-1; j++){
                if(s[i*root + j] != '0'){
                    cout << "NO\n";
                    return;
                }
            }
        } 
        for(int i = 0; i < root; i++){
            if(s[(root-1)*root + i] == '0'){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
