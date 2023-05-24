#include<stdio.h>
int main(){
    int A[10][10], sum = 0, rows, cols;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of cols: ");
    scanf("%d", &cols);

    //accepting the elements
    for(int i = 0; i <rows; i++)
        for(int j = 0; j<cols; j++)
            scanf("%d", &A[i][j]);
    
    //ops
    for(int i = 0; i <rows; i++)
        for(int j = 0; j<cols; j++)
            if(i>j)
                sum += A[i][j];
    
    printf("the sum of lower triangular matrix is: %d", sum);
    return 0;
}