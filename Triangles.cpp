#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long x, y, z; std::cin >> x >> y >> z;
        int possible = ((x < y + z) && (y < x + z) && (z < x + y));
        std::cout << possible << " ";
    }
    std::cout << std::endl;

    return 0;
}
