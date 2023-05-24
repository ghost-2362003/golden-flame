#include<stdio.h>
#include<math.h>
int convert1(long long);
int main(){
    long long x;
    printf("enter the binary number: ");
    scanf("%lld", &x);
    int res = convert1(x);
    printf("%lld in binary = %d in decimal", x, res);
    return 0;
}

int convert(long long n){
    int res = 0, num = n, i = 0;
    while(num != 0){
        int temp = num%10;
        res += temp*pow(2,i);
        i++;
        num = num/10;
    }
    return res;
}

int convert1(long long n){
    int dec = 0, i = 0, rem;
    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}