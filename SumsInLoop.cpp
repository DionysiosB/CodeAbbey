#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    while(n--){
        long x, y; scanf("%ld %ld\n", &x, &y);
        printf("%ld ", x + y);
    }
    puts("");

    return 0;
}
