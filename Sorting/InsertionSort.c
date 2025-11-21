#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int n = 5;
    int i, j, key;

    // Insertion Sort
    for (i = 1; i < n; i++) {
        key = arr[i];      // pick the current element
        j = i - 1;

        // move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // place key at correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
