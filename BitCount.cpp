#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int32_t x; std::cin >> x;
        uint32_t y = x;
        int count(0);
        while(y > 0){count += y % 2; y /= 2;}
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
