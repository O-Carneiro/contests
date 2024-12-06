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
    for(int i = 0; i < 3; i++){
        string s; cin >> s;
        bool A, B, C; 
        A = B = C = false;
        for(char c : s){
            if(c == 'A') A = true;
            else if(c == 'B') B = true;
            else if(c == 'C') C = true;
        } 
        if(!A) cout << "A\n";
        else if(!B) cout << "B\n";
        else if(!C) cout << "C\n";
    }
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
