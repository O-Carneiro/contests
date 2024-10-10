#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> sup, inf;
    set<int> supS, infS;
    for(int i = 0; i < n; i++){
        int x, y;cin >> x >> y;
        if(y){
            sup.push_back(x);
            supS.insert(x);
        }
        else {
            inf.push_back(x);
            infS.insert(x);
        }
    }
    if(!sup.size() || !inf.size()) {cout << "0\n"; return;}
    sort(sup.begin(), sup.end());sort(inf.begin(), inf.end());
    int i = 0, j = 0;
    int ans = 0;
    while(i < sup.size() || j < inf.size()){
        if (j >= inf.size()) break;

        if(supS.find(inf[j] - 1) != supS.end()
        && supS.find(inf[j] + 1) != supS.end())
            ans++;

        while(sup[i] < inf[j] && i < sup.size()){
            if(infS.find(sup[i] - 1) != infS.end()
            && infS.find(sup[i] + 1) != infS.end())
                ans++;
            i++;
        }
        if(sup[i] == inf[j] && i < sup.size() && j < inf.size()){
            ans += sup.size() - 1;
            ans += inf.size() - 1;
        }
        j++;
    }
    while(i < sup.size()){
        if(infS.find(sup[i] - 1) != infS.end()
        && infS.find(sup[i] + 1) != infS.end())
            ans++;
        i++;
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
