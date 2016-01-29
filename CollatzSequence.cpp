#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long x; std::cin >> x;
        long count(0);
        while(x != 1){
            if(x % 2){x = 3 * x + 1;}
            else{x /= 2;}
            ++count;
        }
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
