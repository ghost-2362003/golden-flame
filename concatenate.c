#include<stdio.h>
#include<string.h>
int main(){
    char A[1000], B[1000];
    int i = strlen(A), j = 0;
    printf("enter the string: ");
    scanf("%s", A);
    printf("enter the string: ");
    scanf("%s", B);

    for(j = 0; B[j] != '\0'; j++){
        A[i+j] = B[j];
    }

    for(int k = 0; k<i+j; k++)
        printf("%c", A[k]);
    return 0;
}