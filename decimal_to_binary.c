#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    int arr[100], i = 0;
    while(num>0){
        arr[i] = num%2;
        num /= 2;
        i++;
    }

    for(int j = i-1; j>=0; j--)
        printf("%d", arr[j]);
    return 0;
}