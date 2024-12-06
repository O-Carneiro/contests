#include <bits/stdc++.h>
#include <numeric>

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
    vpll people(n);
    vll b(n), corr(n,0), ans(n);
    for(int i = 0; i < n; i++){
        cin >> people[i].first;
        cin >> people[i].second;
        b[i] = people[i].second;
    }
    sort(people.begin(),people.end());
    sort(b.begin(),b.end());
    // for(auto &[i,j] : people) cout << '(' << i << ',' << j << ") ";
    // cout << '\n';
    // for(int i : b) cout << i << ' ';
    // cout << '\n';
    int l = 0, r = n-1;
    for(int i = 0; i < n; i++){
        int j = people[i].second;
        l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(b[mid] < j) l = mid + 1;
            else if(b[mid] > j) r = mid - 1;
            else {ans[i] = mid; break;}
        }
    }
    cout << accumulate(ans.begin(),ans.end(),0) << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
