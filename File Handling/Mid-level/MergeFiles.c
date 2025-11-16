#include <stdio.h>

void copyFile(FILE *src, FILE *dest) {
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
}

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *out = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || out == NULL) {
        printf("Error opening files!\n");
        return 0;
    }

    copyFile(f1, out);
    fputc('\n', out);
    copyFile(f2, out);

    fclose(f1);
    fclose(f2);
    fclose(out);

    printf("Files merged successfully.\n");
    return 0;
}
