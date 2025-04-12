#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
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
    int arr_copy[n];

    clock_t start, end;
    double cpu_time_used;

    for (int i = 0; i < n; i++) {
        arr_copy[i] = arr[i];
    }
    start = clock();
    sort_vstavka(arr_copy, n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Insertion sorting time: %f seconds\n", cpu_time_used);

    for (int i = 0; i < n; i++) {
        arr_copy[i] = arr[i];
    }
    start = clock();
    sort_sliyanie(arr_copy, 0, n - 1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Merge sort execution time: %f seconds\n", cpu_time_used);

    for (int i = 0; i < n; i++) {
        arr_copy[i] = arr[i];
    }
    start = clock();
    fast_sort(arr_copy, 0, n - 1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Quick sort execution time: %f seconds\n", cpu_time_used);


    return 0;
}