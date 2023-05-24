#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], reverse[100];
    printf("enter string: ");
    scanf("%s", str1);
    int len = strlen(str1);

    int j = len-1;
    for(int i = 0; i<len; i++){
        reverse[i] = str1[j];
        j--;
    }

    printf("reverse string is: ");
    for(int i = 0; i<len; i++)
        printf("%c", reverse[i]);
    return 0;
}