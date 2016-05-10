#include <iostream>
#include <vector>
#include <cmath>
    
const double g = 9.81;
const double PI = 3.14159265358;
const double EPS = 1e-5;

int main(){

    const int Trials = 3;
    const int r = 3;
    const int S = 4;
    const int N = 40;

    for(int trial = 0; trial < Trials; trial++){
        std::vector<int> slope(S * N); 
        for(int p = 0; p < N; p++){
            int x; std::cin >> x;
            for(int q = 0; q < S; q++){slope[S * p + q] = S * x;}
        }

        for(int attempt = 0; attempt < r; attempt++){
            double u, phi; std::cin >> u >> phi;
            double dt = 1.0 / (u * cos(phi * PI / 180.0));
            int x(0);
            for(int p = 0; p < S * N; p++){
                double t = (p + 1) * dt - EPS;  //Check the right corner of the rectangle
                double y = u * t * sin(phi * PI / 180.0) - 0.5 * g * t * t;
                if(y < slope[p]){x = p; break;}
            }
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
