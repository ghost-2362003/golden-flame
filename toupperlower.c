#include<stdio.h>
int main(){
    char str[1000];
    printf("enter string: ");
    scanf("%s", str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++)
        len++;
    
    for(int i = 0; i<len; i++){
        if(str[i]<=90 && str[i]>=65)
            str[i] = str[i] + 32;
        else{
            str[i] = str[i]-32;
        }
    }

    printf("%s", str);
    return 0;
}