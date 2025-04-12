#include <stdio.h>

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void fast_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        fast_sort(arr, low, pi - 1);
        fast_sort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {15, 12, 44, 2, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The source array: \n");
    printArray(arr, n);

    fast_sort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}