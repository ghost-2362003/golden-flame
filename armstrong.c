#include<stdio.h>
#include<math.h>
int power(int);
void isarmstrong(int, int);
int main(){
    int n;
    int p;
    printf("enter the number: ");
    scanf("%d", &n);
    p = power(n);
    isarmstrong(n, p);
    return 0;
}

int power(int n){
    int pow1 = 0;
    while(n>0){
        ++pow1;
        n = n/10;
    }
    return pow1;
}

void isarmstrong(int n, int pr){
    int sum = 0, m = n;
    while(m>0){
        int temp = m%10;
        sum += pow(temp, pr);
        m = m/10;
    }
    if(n == sum)
        printf("armstrong number");
    else    
        printf("not a armstrong number");
}