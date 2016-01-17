#include <iostream>
#include <algorithm>

int main(){

    std::string s; getline(std::cin, s);
    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}
