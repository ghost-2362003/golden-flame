#include<stdio.h>
int main(){
    char str[1000];
    printf("enter the string: ");
    scanf("%s", str);
    int len = 0, i = 0;
    while(str[i] != '\0'){
        len++;
        i++;
    }
    printf("length of string is: %d", len);
    return 0;
}