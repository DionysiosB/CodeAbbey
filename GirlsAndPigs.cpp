#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int l, b; std::cin >> l >> b;
        int count(0);
        for(int g = 1; 2 * g <= l; g++){
            if((l - 2 * g) % 4){continue;}
            int p = (l - 2 * g) / 4;
            if(((p > 0) && ( ((b - 2 * g) / 2) % p == 0)) || (l == b) ){++count;}
        }
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
