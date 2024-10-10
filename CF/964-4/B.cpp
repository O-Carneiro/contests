#include <iostream>

#define desafios std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long int

signed main(){
    desafios coxa 
    int t, a1, a2, b1, b2;
    int victoriesA;
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> a1 >> a2 >> b1 >> b2;
        victoriesA = 0;
        if(a1 > b1 && a2 >= b2) victoriesA++;
        else if (a1 >= b1 && a2 > b2) victoriesA++;

        if(a1 > b2 && a2 >= b1) victoriesA++;
        else if(a1 >= b2 && a2 > b1) victoriesA++;

        if(a2 > b1 && a1 >= b2) victoriesA++;
        else if(a2 >=  b1 && a1 > b2) victoriesA++;

        if(a2 > b2 && a1 >= b1) victoriesA++;
        else if(a2 >= b2 && a1 > b1) victoriesA++;
        std::cout << victoriesA << '\n';
    }
    return 0;
}
