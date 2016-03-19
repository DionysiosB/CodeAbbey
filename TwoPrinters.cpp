#include <iostream>

int main(){

    long t; std::cin >> t;
    while(t--){
        long x, y, n; std::cin >> x >> y >> n;
        long a = n * y / (x + y);
        long b = n * x / (x + y);
        if(a + b < n){if((a + 1) * x < (b + 1) * y){++a;} else{++b;}}

        long timeA = a * x;
        long timeB = b * y;
        long time = (timeA > timeB) ? timeA : timeB;
        std::cout << time << " ";
    }
    std::cout << std::endl;


    return 0;
}
