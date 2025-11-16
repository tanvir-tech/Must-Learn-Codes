#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;    // starting a new word
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
