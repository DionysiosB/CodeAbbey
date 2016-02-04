#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        long a(0), b(0);
        if(x1 == x2 && y1 != y2){puts("Error");}
        else if(x1 == x2 && y1 == y2){a = 0; b = y1;}
        else{a = (y2 - y1) / (x2 - x1); b = y1 - a * x1;}
        std::cout << "(" << a << " " << b << ") ";
    }
    std::cout << std::endl;

    return 0;
}
