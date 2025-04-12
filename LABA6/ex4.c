#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, *arr;
    arr = (int*) malloc(amount * sizeof(int));

    printf("Enter a number of array's elements:\n");
    scanf("%d", &amount);
    printf("Fill out the array:\n");
    for(int i=0; i<amount; ++i){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<amount; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int num;
    printf("Choose a number of element for deleting:\n");
    scanf("%d", &num);

    for(int i=num-1; i<amount-1; ++i){
        arr[i] = arr[i+1];
    }
    for(int i=0; i<amount-1; ++i){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}