#include<stdio.h>
#include<math.h>
int convert(long long);
int main(){
    long long x;
    printf("enter the binary number: ");
    scanf("%lld", &x);
    int res = convert(x);
    printf("%lld in binary = %d in decimal", x, res);
    return 0;   
}

int convert(long long n){
     int res = 0, i = 0;
    while(n != 0){
        int temp = n%10;
        res += temp*pow(2,i);
        i++;
        n = n/10;
    }
    return res;
}