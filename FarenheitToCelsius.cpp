#include <iostream>
#include <cmath>

int main(){

    long n; std::cin >> n;
    while(n--){
        int x; std::cin >> x;
        std::cout << round((x - 32.0) * 5.0 / 9.0 ) << " ";
    }
    std::cout << std::endl;

    return 0;
}
