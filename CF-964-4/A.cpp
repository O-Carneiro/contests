#include <iostream>

#define desafios std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define ll long long int

void solve(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    std::cout << sum << '\n';
}

int main(){
    desafios coxa
    int t;std::cin >> t;
    for(int i = 0; i < t; i++){
        int n; std::cin >> n;
        solve(n);
    }
    return 0;
}
