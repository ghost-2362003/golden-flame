#include<stdio.h>
int main(){
    int arr[10] = {3,65,123,546,129,62,133,46,12,5};
    int i, j;
    for(i = 0; i<9; i++)
        for(j = 0; j<9-i; j++)
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    
    for(int k = 0; k<10; k++)
        printf("%d ", arr[k]);
    return 0;
}