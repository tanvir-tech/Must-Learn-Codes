/*
 * MatrixDeterminant.c
 * Simple C program to calculate the determinant of a square matrix.
 * Uses recursion (Laplace expansion).
 */

#include <stdio.h>

#define MAX 10 // Maximum matrix size

// Function to get cofactor of matrix[p][q] in temp[][]
void getCofactor(int matrix[MAX][MAX], int temp[MAX][MAX], int n, int p, int q) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = matrix[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Recursive function to find determinant of matrix
int determinant(int matrix[MAX][MAX], int n) {
    int det = 0;
    if (n == 1)
        return matrix[0][0];

    int temp[MAX][MAX]; // To store cofactors
    int sign = 1;

    for (int f = 0; f < n; f++) {
        getCofactor(matrix, temp, n, 0, f);
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

int main() {
    int n, matrix[MAX][MAX];
    printf("Enter matrix size (n x n, n <= %d): ", MAX);
    scanf("%d", &n);

    printf("Enter matrix elements row-wise:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int det = determinant(matrix, n);
    printf("Determinant: %d\n", det);

    return 0;
}