#include <stdio.h>
#include "backArray.h"

int main()
{
    int n=10;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    printf("Original massiv:\n");
    for(int i=0; i<10; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");

    back_array(arr, n);

    printf("Back massiv:\n");
    for(int i=0; i<10; ++i){
        printf("%d ", arr[i]);
    }

    getchar();

    return 0;
}