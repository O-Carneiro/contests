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

}

signed main(){
    MAC0214 muito coxa
    int t, x1, x2, x3; cin >> t;
    if(t==1 || t==100){
        x1=2;
        x2=99;
        for(int i=3; i<=100; i++){  
        x3=i;
            if((x1+x2)-x3!=t && (x1+x2)+x3!=t && (x1+x2)/x3!=t && (x1+x2)*x3!=t
                && (x1-x2)-x3!=t && (x1-x2)+x3!=t && (x1-x2)/x3!=t && (x1-x2)*x3!=t
                && (x1/x2)-x3!=t && (x1/x2)+x3!=t && (x1/x2)/x3!=t && (x1/x2)*x3!=t
                && (x2/x1)-x3!=t && (x2/x1)+x3!=t && (x2/x1)/x3!=t && (x2/x1)*x3!=t
                && (x1*x2)-x3!=t && (x1*x2)+x3!=t && (x1*x2)/x3!=t && (x1*x2)*x3!=t
                && (x1+x2) != t && (x1+x3) != t && (x2+x3) != t
                && (x1-x2) != t && (x1-x3) != t && (x2-x3) != t
                && (x2-x1) != t && (x3-x1) != t && (x3-x2) != t
                && (x1/x2) != t && (x1/x3) != t && (x2/x3) != t
                && (x2/x1) != t && (x3/x1) != t && (x3/x2) != t
                && (x1*x2) != t && (x1*x3) != t && (x2*x3) != t
                && x3!=t && x2!=t && x1!=x2 && x1!=x3){
                cout << x1 << " " << x2 << " " << x3 << endl;
                break;
            }
        }
    }
    else{
        x1=1;
        if(t==99){
            x1=7;
        }
        x2=100;
        for(int i=3; i<=100; i++){  
            x3=i;
            if((x1+x2)-x3!=t && (x1+x2)+x3!=t && (x1+x2)/x3!=t && (x1+x2)*x3!=t
                && (x1-x2)-x3!=t && (x1-x2)+x3!=t && (x1-x2)/x3!=t && (x1-x2)*x3!=t
                && (x1/x2)-x3!=t && (x1/x2)+x3!=t && (x1/x2)/x3!=t && (x1/x2)*x3!=t
                && (x2/x1)-x3!=t && (x2/x1)+x3!=t && (x2/x1)/x3!=t && (x2/x1)*x3!=t
                && (x1*x2)-x3!=t && (x1*x2)+x3!=t && (x1*x2)/x3!=t && (x1*x2)*x3!=t
                && (x1+x2) != t && (x1+x3) != t && (x2+x3) != t
                && (x1-x2) != t && (x1-x3) != t && (x2-x3) != t
                && (x2-x1) != t && (x3-x1) != t && (x3-x2) != t
                && (x1/x2) != t && (x1/x3) != t && (x2/x3) != t
                && (x2/x1) != t && (x3/x1) != t && (x3/x2) != t
                && (x1*x2) != t && (x1*x3) != t && (x2*x3) != t
                && x3!=t && x2!=t && x1!=x2 && x1!=x3 && x1!=t){
                cout << x1 << " " << x2 << " " << x3 << endl;
                break;
            }
        }
    } 
    return 0;
}
