#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("upper.txt", "w");
    char ch;

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);   // convert and write
    }

    fclose(in);
    fclose(out);

    printf("Converted to UPPERCASE successfully.\n");
    return 0;
}
