#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string ans(n,'.');
    vector<int> count(26);
    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
    }
    int letterIndex = 0;
    for(int i = 0; i < n; i++){
        while(count[letterIndex % 26] == 0)letterIndex++;
        ans[i] = char((letterIndex % 26) + 'a'); 
        count[letterIndex % 26]--;
        letterIndex++;
    }
    cout << ans << '\n'; 
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
