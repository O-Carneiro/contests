#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arrNum(n);
    for(int i = 0; i < n; i++) cin >> arrNum[i];
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        string str; cin >> str;
        if(str.size() != n) {cout << "NO\n"; continue;}
        set<pair<int,char>> s;
        set<int> intSet; set<char> charSet;
        bool answered = false;
        for(int j = 0; j < n; j++){
            char c = str[j];
            int num = arrNum[j];
            bool seen = false;
            if(intSet.find(num) != intSet.end()) seen = true;
            else if(charSet.find(c) != charSet.end()) seen = true;
            

            if(!seen) { 
                s.insert({num,c});
                intSet.insert(num);
                charSet.insert(c);
            }
            else{
                if(s.find({num,c}) == s.end()) {
                    cout << "NO\n";
                    answered = true;
                    break;
                }
            }
        }
        if(!answered) cout << "YES\n";
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t; 
    while(t--) solve();
    return 0;
}
