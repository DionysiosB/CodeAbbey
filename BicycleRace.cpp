#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        double s, u, v; std::cin >> s >> u >> v;
        double res = u * s / (u + v);
        std::cout.precision(10);
        std::cout << res << " ";
    }
    std::cout << std::endl;

    return 0;
}
