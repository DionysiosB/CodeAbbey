#include <iostream>
#include <cmath>

const long double PI = 3.141592653589793238462643383279;

int main(){

    int t; std::cin >> t;
    while(t--){
        long double d, a, b; std::cin >> d >> a >> b;
        a *= PI / 180.0; b *= PI / 180.0;
        int h = round(d * tan(a) * tan(b) / (tan(b) - tan(a)));
        std::cout << h << " ";
    }
    std::cout << std::endl;

    return 0;
}
