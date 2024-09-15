#include <bits/stdc++.h>
#include <ostream>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void search(){

}

void solve(){
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    set<pair<int,int>> ans;
    int a = 1, b = 2, res, edges = 0;
    while(true){
        cout << "? " << a << ' ' << b << endl;
        cin >> res;
        if(res == -1) return;

        if(res == a){
            ans.insert({a,b});
        }
        else 
            search(a, res);

        if(edges == n - 1)
            break;
    }
    
    cout << '!';
    fflush(stdout);
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
