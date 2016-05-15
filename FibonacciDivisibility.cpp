#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long M; std::cin >> M;
        long x = 0; long y = 1 % M;
        long count(1);
        while(y > 0){
            long temp = x + y; x = y; y = temp;
            x %= M; y %= M;
            ++count;
        }
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
