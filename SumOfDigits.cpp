#include <iostream>

int main(){

    const int B = 10;

    long N; std::cin >> N;
    while(N--){
        long a, b, c; std::cin >> a >> b >> c;
        long x = a * b + c;
        int sum(0);
        while(x > 0){sum += x % B; x /= B;}
        std::cout << sum << " ";
    }

    std::cout << std::endl;

    return 0;
}
