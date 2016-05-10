#include <iostream>
#include <set>

int main(){

    int t; std::cin >> t;
    while(t--){
        size_t n; std::cin >> n;
        std::set<char> cities;
        for(int p = 0; p < n; p++){
            std::string s; std::cin >> s;
            cities.insert(s[0]); cities.insert(s[2]);
        }
        std::cout << (n - cities.size() + 1) << " ";
    }
    std::cout << std::endl;

    return 0;
}
