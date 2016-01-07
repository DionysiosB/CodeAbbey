#include <iostream>
#include <cmath>

int main(){

    long t; std::cin >> t;
    while(t--){
        double a, b; std::cin >> a >> b;
        std::cout << round(a / b) << " ";
    }
    std::cout << std::endl;

    return 0;
}
