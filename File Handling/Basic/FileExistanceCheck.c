#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL)
        printf("File does NOT exist.\n");
    else {
        printf("File exists.\n");
        fclose(fp);
    }

    return 0;
}
