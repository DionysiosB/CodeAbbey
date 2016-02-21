#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){

        long x, n; std::cin >> x >> n;
        long double r(1.0);
        while(n--){r = 0.5 * (r + x / r);}
        std::cout.precision(10);
        std::cout << r << " ";
    }
    std::cout << std::endl;

    return 0;
}
