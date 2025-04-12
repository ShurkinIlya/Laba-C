#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Write a size of array: ");
    scanf("%d", &size);

    int *arr;
    arr = (int*) malloc(size*sizeof(int));
    printf("Write all elements of array:\n");
    for(int i=0; i<size; ++i){
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<size; ++j){
        printf("%d ", arr[j]);
    }

    free(arr);
    return 0;
}