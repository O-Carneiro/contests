#include <iostream>

#define desafios std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long

int log3(int x){//calcula log3(x)
    int cont = 0;
    while(x != 0){
        x /= 3;
        cont++;
    }
    return cont-1;
}

signed main(){
    desafios coxa 
    int t; std::cin >> t;
    int l, r, logL, logR, ans = 0, x;
    int pot3[] = {1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049, 177147};
    for(int i = 0; i < t; i++){
        std::cin >> l >> r;
        ans = 2*(log3(l) + 1);
        x = l+1;
        logL = log3(l);
        logR = log3(r);
        if(logL < logR){
            while(logL < logR){
                ans += (logL+1)*(pot3[logL+1] - x);
                x = pot3[logL+1];
                logL++;
            }
            ans += (logL+1)*(r - x + 1);
        } else {
            ans += (logL+1)*(r - l);
        }
        std::cout << ans << '\n';
    } 
    return 0;
}
