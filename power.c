#include<stdio.h>
int power(int, int);
int main(){
    int n, e;
    printf("enter the base and exponent: ");
    scanf("%d%d", &n, &e);
    long res = power(n, e);
    printf("%d^%d = %d", n, e, res);
    return 0;
}

int power(int n, int e){
    if(e>=1)
        return n* power(n, e-1);
    return 1;
}