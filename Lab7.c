#include <stdio.h>
#include <stdlib.h>

void bSort(int* a, int n){

    int t;
    printf("Iteration %d: ", 0);
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        printf("Iteration %d: ", i+1);
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }




}

int main(void)
{
    int n = 9;
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bSort(arr, n);

    return 0;
}