#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int sum = 0, n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i], sum+=a[i];
    if(n <= 2) {cout << "-1\n"; return;}
    sort(a.begin(), a.end());
    double avg = (double)sum/n;
    int mid = a[n/2];
    if(mid < avg/2){cout << "0\n"; return;}
    int ans = ((mid)*2*n)-sum;
    cout << ans+1 << '\n';

}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
