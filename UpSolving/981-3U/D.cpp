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
    //Adicionamos o 0 como visto pq se o número 
    // no array for 0, devemos considerá-lo como
    // um intervalo bonito.
    set<int> seen; seen.insert(0);
    int sum = 0, ans = 0;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        sum += num;
        //Se a soma acumulada volta para algum numero,
        // o acumulado do intervalo eh 0
        if(seen.find(sum) != seen.end()){
            sum = 0;
            seen.clear();
            seen.insert(0);
            ans++;
        }
        else seen.insert(sum);
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
