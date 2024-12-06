#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    int n; cin >> n;
    if(n <= 4) {cout << "-1\n"; return;}
    vll impar;
    vll par;
    for(int i = 1; i <=n; i++){
       if(i & 1) impar.push_back(i);
       else par.push_back(i);
    }
    for(int i : impar) cout << i << ' ';
    int last = impar[impar.size()-1];
    bool flg2=false, flg6 = false, flg4 =false;
    if(last%3==0) {
        cout << "6 "; 
        flg6 = true;
    }
    else {
        if((last + 4)%3 == 0){
            cout << "4 ";
            flg4 = true;
        }
        else {
            cout << "2 ";
            flg2 = true;
        }
    }
    for(int i : par) {
        if(i == 6 && flg6) continue;
        if(i == 4 && flg4) continue;
        if(i == 2 && flg2) continue;
        cout << i << ' ';
    }
    cout << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
