#include <iostream>
#include <string>

#define desafios std::ios_base::sync_with_stdio(false);
#define coxa std::cin.tie(NULL);
#define int long long

signed main(){
    desafios coxa 
    int T, size, pointer;
    std::cin >> T;
    std::string s, t;
    for(int i = 0; i < T; i++){
        std::cin >> s >> t;
        pointer = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j]==t[pointer]) pointer++;
            else if(s[j] == '?'){
                if(pointer < t.size())
                    s[j] = t[pointer++];
                else
                    s[j] = 'a';
            }
        }
        if(pointer == t.size()){
            std::cout << "YES\n";
            std::cout << s << '\n';
        }
        else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
