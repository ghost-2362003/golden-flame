#include<stdio.h>
int gcd3(int, int, int);
int main(){
    int a, b, c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int res = gcd3(a, b, c);
    printf("GCD of %d, %d, %d is %d", a, b, c, res);
    return 0;
}

int gcd3(int a, int b, int c){
    if(c != 0)
        return gcd3(c, b%c, a%c);
    return 1;
}