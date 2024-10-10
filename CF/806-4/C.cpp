#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> wheel(n);
    vector<int> movesUP(n, 0);
    vector<int> movesDOWN(n, 0);
    for(int i = 0; i < n; i++)cin >> wheel[i];
    for(int i = 0; i < n; i++){
        int useless; cin >> useless;
        string s; cin >> s;
        for(char j : s){
            if(j == 'U')movesUP[i]++;
            else if(j == 'D')movesDOWN[i]++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << (wheel[i]+movesDOWN[i]-movesUP[i] + 10) % 10 << ' ';
    }
    cout << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
