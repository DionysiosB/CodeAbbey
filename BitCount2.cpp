#include <iostream>

int main(){

    const int N = 32;

    int t; std::cin >> t;
    while(t--){
        int32_t x; std::cin >> x;
        int count(0);
        for(int p  = 0; p < N; p++){count += (x & 1); x >>= 1;}
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
