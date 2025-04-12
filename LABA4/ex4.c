#include <stdio.h>
void bubble_sort(int arr[], int n) 
{
   int j=0;
   while(j<n){
        for(int i=0; i<n; ++i){
            if(arr[i]>arr[i+1]){
                int c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    ++j;
   }  
}
int main() 
{
    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Original massiv: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    printf("\n");
    bubble_sort(arr, n);
 
    printf("Sorted massiv: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    printf("\n");
    return 0;
}