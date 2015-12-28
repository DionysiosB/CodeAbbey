#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long sum(0);
    while(n--){long x; scanf("%ld", &x); sum += x;}
    printf("%ld\n", sum);

    return 0;
}
