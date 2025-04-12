#include <stdio.h>
void print_arr(int arr[], int size){
    for(int i = 0; i<size; i++){
        printf("%d", arr[i]);
    }
}
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
void last(int arr[], int size){
    swap(&arr[0], &arr[size-1]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_arr(arr, size);
    printf("\n");
    last(arr, size);
    print_arr(arr, size);

    return 0;
}