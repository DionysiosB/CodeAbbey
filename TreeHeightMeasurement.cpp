#include <iostream>
#include <cmath>

int main(){

    const double PI = 3.1415926535897932384626;

    int t; std::cin >> t;
    while(t--){
        
        double d, b; std::cin >> d >> b;
        b -= 90.0; b *= PI / 180.0;
        int ans = round(d * tan(b));
        std::cout << ans << " ";
    }
    std::cout << std::endl;

    return 0;
}
