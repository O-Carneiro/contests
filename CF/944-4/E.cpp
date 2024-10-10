#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int bs(vector<int> &signs, int target){
    int l = 0, r = signs.size()-1, mid;
    while(l <= r){
        mid = (l + r)/2;
        if(signs[mid] > target)
            r = mid - 1;
        else if(signs[mid] < target)
            l = mid + 1;
        else return mid;
    }
    mid = (l + r)/2;
    return mid;
}

void solve(){
    int n, k, q; cin >> n >> k >> q;
    vector<int> signs(k+1,0), minutes(k+1,0);
    for(int i = 0; i < k; i++) cin >> signs[i+1];
    for(int i = 0; i < k; i++) cin >> minutes[i+1];
    vector<double> speed(k+1,0);
    for(int i = 1; i <= k; i++)
        speed[i] = (double)(signs[i]-signs[i-1])/(minutes[i]-minutes[i-1]);
    for(int i = 0; i < q; i++){
        int target; cin >> target;
        int index = bs(signs, target);
        if(index < k)
            cout << minutes[index] + (int)floor((target-signs[index])/speed[index+1]) << ' ';
        else cout << minutes[index] << ' ';
    }
    cout << '\n';

}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
