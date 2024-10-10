#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    string h24; cin >> h24;
    string h12, h(2,'x'), min(2,'x');
    h[0] = h24[0]; h[1] = h24[1]; 
    min[0] = h24[3] ; min[1] = h24[4]; 
    int hour = stoi(h); 
    int minute = stoi(min); 
    bool isItAM = false;
    if(hour < 12) isItAM = true;
    if(isItAM){
        if(hour != 0){
            cout << h24;
        }
        else{
            cout << "12:" << min;
        }
        cout << " AM\n";
    }
    else {
        if(hour == 12)
            cout << hour << ':' << min;
        else if(hour - 12 >= 10)
            cout << hour - 12<< ':' << min;
        else {
            cout << '0' << hour - 12 << ':' << min;
        }
        cout << " PM\n";
    }
}

signed main(){
    MAC0214 coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
