#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> seats(n+2, 0), order(n);
    seats[0] = 0; seats[n+1] = 0;
    int pos;
    for(int i = 0; i < n ; i++) cin >> order[i];
    for(int i = 0; i < n ; i++) {
        pos = order[i];
        if(i != 0 && !seats[pos+1] 
            && !seats[pos-1]) {cout << "NO\n"; return;}
        seats[pos] = 1; 
    }
    cout << "YES\n";
}

signed main(){
    MAC0214 coxa
    int t; cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}
