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
    vll b1, b11, b10;
    for(int i=0; i < n; i++) {
        int t; cin >> t;
        string s; cin >> s;
        if(s == "01") b1.push_back(t);
        if(s == "10") b10.push_back(t);
        if(s == "11") b11.push_back(t);
    }
    sort(b1.begin(), b1.end());
    sort(b10.begin(), b10.end());
    sort(b11.begin(), b11.end());
    int min2livros = 1e9 + 500;
    int min1livro = 1e9 + 500;
    bool possible = false;

    if(b1.size() > 0 && b10.size() > 0) 
        possible=true, min2livros = b1[0] + b10[0];
    if(b11.size() > 0) 
        possible=true, min1livro = b11[0];
    if(possible) cout << min(min1livro,min2livros);
    else cout << -1;
    cout << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
