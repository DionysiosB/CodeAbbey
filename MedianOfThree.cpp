#include <iostream>
#include <set>

int main(){

    int n; std::cin >> n;
    while(n--){
        std::set<long> s;
        long x, y, z; std::cin >> x >> y >> z;
        s.insert(x); s.insert(y); s.insert(z);
        std::cout << *(++s.begin()) << " ";
    }
    std::cout << std::endl;

    return 0;
}
