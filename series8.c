#include<stdio.h>
int factorial(int);
int main(){
    float sum = 1;
    int x, n;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i<=n-1; i++){
        int temp = factorial(i);
        sum += (i*x)/(float)temp;
    }

    printf("the sum of terms till %dth is %.2f", n, sum);
    return 0;
}

int factorial(int x){
    int fac = 1;
    for(int i = 1; i<=x; i++)
        fac *= i;
    return fac;
}