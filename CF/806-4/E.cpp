#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    int op = 0;
    vector<string> grid(n);
    for(int i = 0; i < n; i++)cin >> grid[i];
    int colStart = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = colStart; j < n - colStart - 1 ; j++){
            int arr[4];
            arr[0] = (grid[i][j] == '1')? 1 : 0; 
            arr[1] = (grid[j][n-1-colStart] == '1')? 1 : 0; 
            arr[2] = (grid[n-1-colStart][n-1-j] == '1')? 1 : 0; 
            arr[3] = (grid[n-1-j][colStart] == '1')? 1 : 0; 
            int conta = arr[0] + arr[1] + arr[2] + arr[3];
            if(conta == 2) op+=2;
            else if (conta == 3 || conta == 1) op++;
        }
        colStart++;
    }
    cout << op << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
