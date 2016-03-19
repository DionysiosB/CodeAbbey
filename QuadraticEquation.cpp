#include <iostream>
#include <cmath>

int main(){

    int t; std::cin >> t;
    while(t--){
        long a, b, c; std::cin >> a >> b >> c;
        long D = b * b - 4 * a * c;
        if(D >= 0){
            long r1 = (-b + sqrt(D)) / (2 * a);
            long r2 = (-b - sqrt(D)) / (2 * a);
            std::cout << r1 << " " << r2 << "; ";
        }
        else{
            long real = -b / (2 * a);
            long img = sqrt(-D) / (2 * a);
            std::cout << real << "+" << img << "i ";
            std::cout << real << "-" << img << "i; ";
        }
    }
    std::cout << std::endl;

    return 0;
}
