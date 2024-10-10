#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

const int MOD = 1e9+7;

int exp(int a, int b){
	if(b == 0) return 1;
	int tmp = exp(a, b/2);
	tmp = (tmp * tmp)%MOD;
	if(b%2 == 1){
		tmp = (tmp * a)%MOD;
	}
	return tmp;
}

int modular_inverse(int a){
	return exp(a, MOD-2);
}

int comb(int n, int k){
	int numerator = 1, denominator = 1;

	for(int i=1; i<=n; i++){
		numerator = (numerator*i)%MOD;
	}

	for(int i=1; i<=k; i++){
		denominator= (denominator*i)%MOD;
	}

	for(int i=1; i<=n-k; i++){
		denominator = (denominator*i)%MOD;
	}

	return (numerator * modular_inverse(denominator))%MOD;
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n+1, 0);
    int cont = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i]; 
    }
    for(int i = n; i > 0; i--){
        if(arr[i] < i){
            if(cont){
                cout << "i: " << i << '\n';
                cout << "arr[i]: " << arr[i] << '\n';
                cout << "cont + 1: " <<cont+1 << '\n';
                int res = comb(cont+1,2);
                cout << "res: " << res << '\n';
                ans+=res;                 
            }
            cont++;
        }
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 muito coxa
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
