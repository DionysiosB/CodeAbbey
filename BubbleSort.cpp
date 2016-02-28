#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    int passes(0);
    int swaps(0);
    bool changed(true);
    while(changed){
        ++passes;
        changed = false;
        for(int p = 1; p < n; p++){if(a[p - 1] > a[p]){int temp = a[p - 1]; a[p - 1] = a[p]; a[p] = temp; ++swaps; changed = true;}}
    }

    std::cout << passes << " " << swaps << std::endl;

    return 0;
}
