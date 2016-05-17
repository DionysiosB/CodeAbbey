#include <iostream>

int main(){
    
    const int M = 12; //Number of Months;
    const double epsilon = 1e-7;

    long double P, R, L; std::cin >> P >> R >> L;
    R /= 100; R /= M;
    long double x = 1;
    for(int p = 0; p < L; p++){x *= (1 + R);}
    long double actual = P * R * x / (x - 1);
    long payment = actual;
    if(actual >= payment + epsilon){++payment;}
    std::cout << payment << std::endl;

    return 0;
}
