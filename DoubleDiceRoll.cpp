#include <iostream>

int main(){

    const int N = 6;
    int t; std::cin >> t;
    while(t--){
        long x, y; std::cin >> x >> y;
        long ans = 2 + (x % N) + (y % N);
        std::cout << ans << " ";
    }
    std::cout << std::endl;

    return 0;
}
