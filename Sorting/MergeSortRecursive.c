#include <stdio.h>

// Merge two sorted halves
void merge(int arr[], int left, int mid, int right)
{
    int i = left;    // starting index of left subarray
    int j = mid + 1; // starting index of right subarray
    int k = 0;       // index for temp array

    int temp[right - left + 1]; // temporary array

    // Merge until one side finishes
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy remaining elements of the left side
    while (i <= mid)
        temp[k++] = arr[i++];

    // Copy remaining elements of the right side
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy temp array back to original array
    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

// Recursive Merge Sort
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);      // sort left half
        mergeSort(arr, mid + 1, right); // sort right half

        merge(arr, left, mid, right); // merge both halves
    }
}

int main()
{
    int arr[] = {9, 4, 7, 3, 8, 2};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
