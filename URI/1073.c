#include<stdio.h>

int main(void){
    long int i,n;
    scanf("%ld",&n);
    for(i=2;i<=n;i+=2)
        printf("%ld^2 = %ld\n",i,i*i);
    return 0;
}
