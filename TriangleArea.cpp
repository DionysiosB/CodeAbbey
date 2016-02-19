#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){

        double ax, ay, bx, by, cx, cy;
        std::cin >> ax >> ay >> bx >> by >> cx >> cy;
        double area = 0.5 * ((ax - bx) * (cy - by) - (ay - by) * (cx - bx));
        if(area < 0){area = -area;}
        std::cout.precision(8);
        std::cout << std::fixed << area << " ";
    }
    std::cout << std::endl;

    return 0;
}
