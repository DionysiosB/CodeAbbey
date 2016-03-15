#include <iostream>
#include <cmath>

int main(){

    int t; std::cin >> t;
    while(t--){
        double p, q; std::cin >> p >> q;
        p /= 100; q /= 100;
        double ans = p / (p + q - p * q);
        ans = round(100 * ans);
        std::cout << ans << " ";
    }
    std::cout << std::endl;

    return 0;
}
