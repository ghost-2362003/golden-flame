#include<stdio.h>
int main(){
    int arr[9] = {23,65,2134,64,24,67,25,90,1};
    for(int i = 0; i<8; i++){
        int min_idx = i;
        for(int  j = i+1; j<9; j++)
            if(arr[min_idx]>arr[j])
                min_idx = j;
        

        if(min_idx != i){
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    } 

    for(int k = 0; k<9; k++)
        printf("%d ", arr[k]);
    return 0;
}