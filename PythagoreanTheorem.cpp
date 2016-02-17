#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::vector<long> side(3);
        std::cin >> side[0] >> side[1] >> side[2];
        sort(side.begin(), side.end());
        long res = side[2] * side[2] - side[1] * side[1] - side[0] * side[0];
        if(res == 0){std::cout << "R ";}
        else if(res < 0){std::cout << "A ";}
        else if(res > 0){std::cout << "O ";}
    }
    std::cout << std::endl;

    return 0;
}
