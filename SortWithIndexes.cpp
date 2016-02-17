#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    std::vector<std::pair<int, int> > array(n);
    for(int p = 0; p < n; p++){
        int x; std::cin >> x;
        array[p].first = x;
        array[p].second = p + 1;
    }

    sort(array.begin(), array.end());
    for(int p = 0; p < n; p++){std::cout << array[p].second << " ";}
    std::cout << std::endl;

    return 0;
}
