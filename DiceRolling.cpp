#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        double x; std::cin >> x;
        std::cout << (1 + (int)(6 * x)) << " ";
    }
    std::cout << std::endl;

    return 0;
}
