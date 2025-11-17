#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int num, sum = 0, count = 0;
    int max, min;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    if (fscanf(fp, "%d", &num) != EOF) {
        max = min = num;
        sum += num;
        count++;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;

        if (num > max) max = num;
        if (num < min) min = num;
    }

    fclose(fp);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / count);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);

    return 0;
}
