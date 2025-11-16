#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;

    if (src == NULL || dest == NULL) {
        printf("Error opening files!\n");
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);   // write to destination
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
