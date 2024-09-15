#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

bool ehBinDecimal(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '1' && s[i] != '0'){
            return false;
        }
    } 
    return true;
}

void solve(){
    string s; cin >> s;
    int n; n = stoi(s);
    bool flg = ehBinDecimal(s), dividiu = true;
    if(flg){
        cout << "YES\n";
        return;
    }
    vector<int> numbers = {10,11,101,111,1001,1011,1101,1111,10001,10011,10101,
        10111,11001,11010,11011,11101,11111};
    while(dividiu){
        dividiu = false;
        for(int i = 0; i < numbers.size(); i++){
            if(n % numbers[i] == 0) {
                dividiu = true;
                n = n / numbers[i];
                break;
            }
        }
        if(ehBinDecimal(to_string(n))){
            flg = true;
            break;
        }
    } 
    cout << ((flg)? "YES\n" : "NO\n");
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
