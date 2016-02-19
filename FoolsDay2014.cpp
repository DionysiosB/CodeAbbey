#include <cstdio>
#include <iostream>
#include <sstream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string line; getline(std::cin, line);
        std::istringstream iss(line);
        long num, ans(0);
        while(iss >> num){ans += num * num;}
        std::cout << ans << " ";
    }
    std::cout << std::endl;

    return 0;
}
