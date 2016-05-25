#include <iostream>
#include <cmath>

int main(){

    const double LOWER = 0;
    const double UPPER = 100;
    const double EPS = 1e-12;
    int t; std::cin >> t;
    while(t--){
        long double a, b, c, d;
        std::cin >> a >> b >> c >> d;

        double left(LOWER), right(UPPER), x(0);
        while(left + EPS < right){
            x = (left + right) / 2.0;
            double f = a*x + b*sqrt(x*x*x) - c*exp(-x/50.0) - d;
            if(f < 0){left = x;}
            else if(f > 0){right = x;}
            else if(f == 0){break;}
        }
        std::cout.precision(15);
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
