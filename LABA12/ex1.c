#include <stdio.h>

void sort_vstavka(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("The source array: \n");
    printArray(arr, arr_size);

    sort_vstavka(arr, arr_size);

    printf("Sorted array: \n");
    printArray(arr, arr_size);

    return 0;
}