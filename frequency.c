#include<stdio.h>
int main(){
    char str[1000];
    printf("enter the string: ");
    scanf("%s", str);
    int len = 0;

    for(int i = 0; str[i] != '\0'; i++)
        len++;

    for(int i = 0; i<len; i++){
        int count = 1;
        if(str[i] != '\0'){
            for(int j = i+1; j<len; j++){
                if(str[i] == str[j]){
                    count++;
                    str[j] = '\0';
                }
            }
            printf("the number of %c is %d\n", str[i], count);
        }
    }
    return 0;
}