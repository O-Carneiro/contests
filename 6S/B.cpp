#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n == 1) {
        cout << "##\n##\n";
        return;
    }
    for(int i = 0; i < 2*n; i++){
        for(int j = 0; j < 2*n; j += 2){
            if((i/2) % 2 == 0) {
                if((j/2) % 2 == 0)
                    cout << "##";
                else
                    cout << "..";
            }
            else{
                if((j/2) % 2 == 0)
                    cout << "..";
                else
                    cout << "##";
            }
        }
        cout << '\n';
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
