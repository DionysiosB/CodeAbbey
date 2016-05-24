#include <iostream>

int main(){

    double a, b; std::cin >> a >> b;
    double n = b - a + 1;
    double sx(0), sxx(0), sy(0), sxy(0);
    for(int p = 0; p < n; p++){
        std::string s; double x, y;
        std::cin >> s >> x >> y;
        sx += x; sy += y;
        sxx += x * x; sxy += x * y;
    }

    double b1 = (n * sxy - sx * sy) / (n * sxx - sx * sx);
    double b0 = sy / n - b1 * sx/n;
    std::cout.precision(11);
    std::cout << b1 << " " << b0 << std::endl;

    return 0;
}
