#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long
using namespace std;

int exp(int a, int b){
	if(b == 0) return 1;
	int tmp = exp(a, b/2);
	tmp = (tmp * tmp);
	if(b%2 == 1){
		tmp = (tmp * a);
	}
	return tmp;
}

int modular_inverse(int a){
	return exp(a,-2);
}

int comb(int n, int k){
	int numerator = 1, denominator = 1;

	for(int i=1; i<=n; i++){
		numerator = (numerator*i);
	}

	for(int i=1; i<=k; i++){
		denominator= (denominator*i);
	}

	for(int i=1; i<=n-k; i++){
		denominator = (denominator*i);
	}

	return (numerator * modular_inverse(denominator));
}

void solve(){
    int n; cin >> n;
    int ans = 0;
    for(int i = n; i > 0; i--){
        ans += comb(i,2);
    }
    cout << ans << '\n';
}

signed main(){
    MAC0214 coxa
    solve();
    return 0;
}
