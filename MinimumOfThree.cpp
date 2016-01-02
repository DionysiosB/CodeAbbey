#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    while(n--){
        long x, y, z; scanf("%ld %ld %ld\n", &x, &y, &z);
        long min = (x < y) ? x : y;
        if(z < min){min = z;}
        printf("%ld ", min);
    }
    puts("");

    return 0;
}
