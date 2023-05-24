#include<stdio.h>
int insertionSort(int [], int);
int main(){
    int arr[8] = {34,653,23,56,20,78,74,1};
    insertionSort(arr, 8);
    for(int i = 0; i<8; i++)
        printf("%d ", arr[i]);
    return 0;
}

int insertionSort(int arr[], int size){
    int i, j, key;
    for(i = 1; i<size; i++){
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}