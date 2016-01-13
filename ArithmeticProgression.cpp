#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long a, b, n; std::cin >> a >> b >>n;
        std::cout << (n * a + n * (n - 1) * b / 2) << " ";
    }
    std::cout << std::endl;

    return 0;
}
