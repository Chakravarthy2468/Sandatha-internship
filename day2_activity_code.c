#include <stdio.h>

int main() {
    long long s=0;
    for(long long i=1;i<=559000;i=i+2){
        s+=i*i;
    }
    printf("sum = %lld",s);
}