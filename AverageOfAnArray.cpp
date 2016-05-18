#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        std::istringstream iss(s);
        int n(0), sum(0), count(0);
        while(iss >> n){sum += n; ++count;}
        long avg = round(1.0 * sum / (count - 1));
        std::cout << avg << " ";
    }
    std::cout << std::endl;

    return 0;
}
