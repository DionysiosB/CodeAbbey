#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<double> a(n);
    std::vector<double> s(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    s[0] = a[0]; s[n - 1] = a[n - 1];
    for(int p = 1; p < n - 1; p++){s[p] = (a[p - 1] + a[p] + a[p + 1]) / 3.0;}

    std::cout.precision(10);
    for(int p = 0; p < n; p++){std::cout << s[p] << " ";}
    std::cout << std::endl;

    return 0;
}
