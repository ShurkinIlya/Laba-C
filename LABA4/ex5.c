#include <stdio.h>
#include <limits.h>
int find_min(int arr[], int n) {
    int a=INT_MIN;
    for(int i=0; i<n; ++i){
        if(arr[i]>a){
            a=arr[i];
        }
    }
    return a;
}
int find_max(int arr[], int n) {
    int a=INT_MAX;
    for(int i=0; i<n-1; ++i){
        if(arr[i]<a){
            a=arr[i];
        }
    }
    return a;
}
double find_average(int arr[], int n){
    double average=0;
    for(int i=0; i<n; ++i){
        average+=arr[i];
    }
    return average/n;
}
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
double find_median(int arr[], int n) {
    bubble_sort(arr, n);
    double a;
    a=0.5+(arr[n/2-1]+arr[n/2])/2;
    return a;
}



int main() {
    int arr[] = {5, 2, 8, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("Original massiv: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    printf("\n");
    printf("Minimal: %d\n", find_min(arr, n));
    printf("Maximal: %d\n", find_max(arr, n));
    printf("Average: %.2f\n", find_average(arr, n));
    printf("Mediana: %.2f\n", find_median(arr, n));
 
    return 0;
}