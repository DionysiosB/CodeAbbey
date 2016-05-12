#include <iostream>
#include <set>

int main(){

    std::string code; int t; std::cin >> code >> t;
    std::set<char> digits;
    for(int p = 0; p < code.size(); p++){digits.insert(code[p]);}
    while(t--){
        std::string s; std::cin >> s;
        int countPos(0);
        int countAny(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == code[p]){++countPos;}
            else if(digits.count(s[p]) > 0){++countAny;}
        }
        std::cout << countPos << "-" << countAny << " ";
    }
    std::cout << std::endl;

    return 0;
}
