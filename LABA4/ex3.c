#include <stdio.h>
void swap_elements(int arr[], int i, int j)
    {
    int c;
    int *pti = &arr[i];
    int *ptj = &arr[j];
    c = *pti;
    *pti = arr[j];
    arr[j] = c;
    }

int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("First massiv: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    swap_elements(arr, 1, 3);
    printf("Massiv after swap: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
    
}