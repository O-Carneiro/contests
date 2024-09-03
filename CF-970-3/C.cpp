#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;
vector<int> nums;

void solve(){
    int l,r; cin >> l >> r;
    int i;
    for(i = 0; l + nums[i] <= r; i++){}
    cout << i + 1 << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    int sum = 1;
    int index=2;
    while(sum <= 10e9){
        nums.push_back(sum);
        sum += index++;
    }
    while(t--) solve();
    return 0;
}
