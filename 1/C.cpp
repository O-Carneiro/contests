#include <iostream>

#define desafios std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long

signed main(){
    desafios coxa 
    int t, n, s, m;
    int l1, l2, r1, r2;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> n >> s >> m;
        bool showered = false;
        l1 = 0; r1 = 0;
        for(int j = 0; j < n; j++){
            std::cin >> l2 >> r2;
            if(l2 - r1 >= s && !showered) {
                std::cout << "YES" << '\n';
                showered = true;
            }
            l1 = l2; r1 = r2;
        }  
        if(!showered && m - r2 >= s){
            std::cout << "YES" << '\n';
            showered = true;
        }
        if(!showered) std::cout << "NO" << '\n';
    }
    return 0;
}
