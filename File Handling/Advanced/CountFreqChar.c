#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    int freq[256] = {0};
    int ch;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        freq[ch]++;   // count each ASCII character
    }

    fclose(fp);

    printf("Character Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}
