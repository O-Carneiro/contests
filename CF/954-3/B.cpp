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

bool isLargestOfNeighboors(int i, int j, vvll &M){
    vll dY = {1,0,-1,0};
    vll dX = {0,1,0,-1};
    for(int k = 0; k < 4; k++){
        if(M[i][j] <= M[i+dY[k]][j+dX[k]]){
            return false; 
        }
    }
    return true;
}

int biggestNeighboor(int i, int j, vvll &M){
    vll dY = {1,0,-1,0};
    vll dX = {0,1,0,-1};
    int maxV = 0;
    for(int k = 0; k < 4; k++){
        if(M[i+dY[k]][j+dX[k]] > 0) maxV = max(maxV, M[i+dY[k]][j+dX[k]]);
    }
    return maxV;
}

void solve(){
    int n, m; cin >> n >> m; 
    vvll M(n+2,vll(m+2, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> M[i][j];
        }
    }
    for(int i = n; i >= 1; i--){
        for(int j = m; j >= 1; j--){
            if(isLargestOfNeighboors(i,j, M)){
                M[i][j] = biggestNeighboor(i,j,M);
            }
        }
    }    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << M[i][j] << ' ';
        }
        cout << '\n';
    }
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
