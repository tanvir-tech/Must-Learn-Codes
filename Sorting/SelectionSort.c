#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int n = 5;
    int i, j, minIndex, temp;

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        minIndex = i;  // assume current index has minimum value

        // find index of minimum element in remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap the found minimum element with the first element of this round
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
