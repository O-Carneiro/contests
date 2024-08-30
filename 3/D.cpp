#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> intStrip(n);
    vector<char> charStrip(n);
    vector<int> sum(n);
    for(int i = 0; i < n; i++){
        cin >> intStrip[i];
    }
    sum[0] = intStrip[0];
    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + intStrip[i];
    }
    for(int i = 0; i < n; i++){
        cin >> charStrip[i];
    }
    int left = 0, right = n-1;
    int score = 0;
    while(left <= right){
        if(charStrip[left] == 'L' && charStrip[right] == 'R'){
            if(left > 0)
                score+= sum[right] - sum[left-1];
            else    
                score+= sum[right];
            left++;
            right--;
        }
        if(charStrip[left] != 'L')
            left++;
        if(charStrip[right] != 'R')
            right--;
    }
    cout << score << '\n';
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
