#include <iostream>
#include <cmath>

int main(){

    const double PI = 3.141592653589793238462643383279;
    const double xc = 10.0;
    const double yc = 10.0;
    const double lm = 9.0;
    const double lh = 6.0;

    int t; std::cin >> t;
    while(t--){
        std::string time; std::cin >> time;
        int h, m;
        if(time[1] != ':'){h = 10 * (time[0] - '0') + (time[1] - '0'); m = 10 * (time[3] - '0') + (time[4] - '0');}
        else{h = (time[0] - '0'); m = 10 * (time[2] - '0') + (time[3] - '0');}

        h %= 12;
        long double phih = PI / 2.0 - 2.0 * PI * (h/12.0 +  m/12.0/60.0);
        long double phim = PI / 2.0 - 2.0 * PI * m / 60.0;
        long double xh = xc + lh * cos(phih);
        long double yh = yc + lh * sin(phih);
        long double xm = xc + lm * cos(phim);
        long double ym = yc + lm * sin(phim);

        std::cout.precision(10);
        std::cout << xh << " " << yh << " " << xm << " " << ym << " ";
    }
    std::cout << std::endl;

    return 0;
}
