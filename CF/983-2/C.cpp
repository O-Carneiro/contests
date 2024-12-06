#include <algorithm>
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
    vll nums(n);
    for(int &numsi : nums) cin >> numsi;
    sort(nums.begin(),nums.end());
    int ans = 0;
    int l = 0, r = n-1;
    int leftSubs = 0;
    while(nums[l] + nums[l+1] <= *(nums.begin()+r) && l < r){
        auto pos = lower_bound(nums.begin()+l, nums.begin()+r, nums[l] + nums[l+1]);
        //Substituicoes a direita, numeros maiores que a menor soma
        int rightSubs = nums.end()-pos;
        int leftSubs = 0;
        while(true){
            auto pos = lower_bound(nums.begin()+l, nums.begin()+r, nums[l] + nums[l+1]);
            //Números maiores que a menor soma
            int degenBigSides = r- (pos-nums.begin());
            cout << "degenBigSides: " << degenBigSides << '\n';
            cout << "sum: " << nums[l] + nums[l+1] << '\n';
            if(degenBigSides <= 0){
                if(leftSubs <= 0) break;
                cout << "leftSubs: " << leftSubs << '\n';
                cout << "rightSubs: " << rightSubs << '\n';
                int incAns;
                if(leftSubs < rightSubs) incAns = leftSubs;
                else l -= leftSubs, r-=rightSubs, incAns = rightSubs;
                ans += incAns;
                break;
            }
            l++, leftSubs++;
        }
        l++;
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
