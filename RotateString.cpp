#include <iostream>

int main(){

    int t; std::cin >> t; 
    while(t--){
        int k; std::string s; std::cin >> k >> s;
        int n = s.size();
        k = (k + n) % n;
        for(int p = 0; p < s.size(); p++){std::cout << s[(p + k + n) % n];}
        std::cout << " ";
    }
    std::cout << std::endl;

    return 0;
}
