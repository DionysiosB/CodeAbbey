#include <iostream>
#include <cmath>

int main(){

    int t; std::cin >> t;
    while(t--){
        double s, r, p; std::cin >> s >> r >> p;
        p /= 100;

        int years(0);
        while(s < r){s *= (1 + p); s = round(100.0 * s) / 100.0; ++years;}
        std::cout << years << " ";
    }
    std::cout << std::endl;

    return 0;
}
