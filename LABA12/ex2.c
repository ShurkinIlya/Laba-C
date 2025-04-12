#include <stdio.h>
#include <stdlib.h>

void sliyanie(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void sort_sliyanie(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        sort_sliyanie(arr, left, mid);
        sort_sliyanie(arr, mid + 1, right);

        sliyanie(arr, left, mid, right);
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

    sort_sliyanie(arr, 0, arr_size - 1);

    printf("Sorted array: \n");
    printArray(arr, arr_size);

    return 0;
}