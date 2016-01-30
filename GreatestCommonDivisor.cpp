#include <iostream>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; std::cin >> t;
    while(t--){
        long x, y; std::cin >> x >> y;
        long a = gcd(x, y);
        long b = x * y / gcd(x, y);
        std::cout << "(" << a << " " << b << ") ";
    }
    std::cout << std::endl;

    return 0;
}
