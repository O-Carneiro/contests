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
    int score = 0;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++){
            char c; cin >> c;
            if(c == 'X'){
                int iScore, jScore;
                if(i < 5) iScore = i+1;
                else iScore = 10 - i;
                if(j < 5) jScore = j+1;
                else jScore = 10 - j;
                score += min(iScore, jScore);
            } 
        }
    cout << score << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
