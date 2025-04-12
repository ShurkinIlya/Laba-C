#include <stdio.h>
void reverse_array(int arr[], int n) {
    int c;
    for(int i=0, j=n-1; i<n/2; ++i, --j){
        c=arr[j];
        arr[j]=arr[i];
        arr[i]=c;
   }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Original massiv: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
 
    printf("\n");
    reverse_array(arr, n);
 
    printf("Invented massiv: ");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
 
    printf("\n");
    return 0;
}