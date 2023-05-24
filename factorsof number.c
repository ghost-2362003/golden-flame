#include<stdio.h>
int main(){
        int n; 
        printf("enter a number: ");
        scanf("%d", &n);
        int i ;
        for(i = 1; i<n/2; i++)
            if(n%i == 0)
                printf("%d is factor of %d\n", i, n);
        printf("%d is factor of %d\n", n, n);
        return 0;
}