#include <stdio.h>

int binary_poisk(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {15, 12, 44, 2, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 44;
    int result = binary_poisk(arr, 0, n - 1, x);

    if (result != -1)
        printf("The item was found on the index %d\n", result);
    else
        printf("The element was not found in the array\n");

    return 0;
}