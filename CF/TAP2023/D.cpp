#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
#define pb push_back
#define bc push_back
#define all(x) x.begin(),x.end()
using namespace std;

using vll = vector<int>;
using pll = pair<int, int>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    int k;
    vll cs, ps;
    int min, probs;
    bool flag=0;

    cin >> k;

    for(int i=0; i<k; i++){
        int in; cin >>in;
        cs.pb(in);
    }
    for(int i=0; i<k; i++){
        int in; cin >> in;
        ps.pb(in);
    }
    
    min=0;
    probs=0;
    for(int i=1; i<k; i++){
         if(ps[i-1]<ps[i]){
            if(ps[i-1]<c[i-1] && probs+ps[i-1]<c[i-1]) flag=1;
            else if(ps[i-1]<c[i-1]){
                if(min>0 && min*c[i-1]<probs+ps[i-1]){
                    probs=probs-(min*c[i-1]-ps[i-1]);
                }
                else{
                    min=c[i-1]
                }

            }
            else{

            }
        }
        else{

        }
    }
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
