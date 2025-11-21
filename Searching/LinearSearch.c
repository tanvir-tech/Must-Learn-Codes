#include <stdio.h>

int main(void) {
    int arr[] = {5, 3, 8, 6, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, i;

    printf("Enter number to search: ");
    if (scanf("%d", &key) != 1) return 1;

    for (i = 0; i < n; ++i) {
        if (arr[i] == key) {
            printf("Found %d at index %d\n", key, i);
            return 0;
        }
    }

    printf("%d not found in array\n", key);
    return 0;
}