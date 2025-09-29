/*
 * MatrixMultiply.c
 *
 * This program multiplies two matrices entered by the user.
 * 
 * Features:
 * - Accepts dimensions and elements for two matrices from user input.
 * - Checks if matrix multiplication is possible (columns of first == rows of second).
 * - Multiplies matrices using a standard triple-nested loop algorithm.
 * - Displays the resultant matrix.
 *
 * Functions:
 * - multiplyMatrices: Multiplies two matrices and stores the result in a third matrix.
 *   Parameters:
 *     - a: First matrix (int a[][MAX])
 *     - b: Second matrix (int b[][MAX])
 *     - res: Resultant matrix (int res[][MAX])
 *     - r1: Number of rows in first matrix
 *     - c1: Number of columns in first matrix (and rows in second matrix)
 *     - c2: Number of columns in second matrix
 *
 * Usage:
 * - Compile and run the program.
 * - Enter matrix dimensions and elements as prompted.
 * - View the multiplied matrix as output.
 *
 * Constraints:
 * - Maximum matrix size is defined by MAX (currently 10).
 * - Only integer matrices are supported.
 */
#include <stdio.h>

#define MAX 10

void multiplyMatrices(int a[][MAX], int b[][MAX], int res[][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], res[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    multiplyMatrices(a, b, res, r1, c1, c2);

    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}