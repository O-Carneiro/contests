#include <bits/stdc++.h>

#define MAC214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int alice = 0, bob = 0;
    int increase;
    for(int i = n-1; i >=0; i-=2) alice+= arr[i];
    for(int i = n-2; i >=0; i-=2){
        bob += arr[i];
        if(k > 0){
            increase = min(k,arr[i+1]-arr[i]); 
            bob += increase; k -= increase;
        }
    }
    cout << alice - bob << '\n';
}

signed main(){
    MAC214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
