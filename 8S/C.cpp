#include <bits/stdc++.h>
#include <ios>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, max = 0, sum = 0; cin >> n;
    int cont = 0;
    vector<int> seq(n);
    cin >> seq[0];
    max = seq[0];
    sum += max;
    if(sum == 0)cont++;
    for(int i = 1; i < n; i++){
        cin >> seq[i];
        sum += seq[i];
        if(seq[i] > max) max = seq[i];
        if(sum - max == max) cont++;
    }
    cout << cont << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
