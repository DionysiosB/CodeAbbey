#include <cstdio>

int main(){

    const int N = 300;

    long min(0), max(0);
    for(int p = 0; p < N; p++){
        long x; scanf("%ld", &x);
        if(!p){min = x; max = x;}
        if(x < min){min = x;}
        if(max < x){max = x;}
    }

    printf("%ld %ld\n", max, min);

    return 0;
}
