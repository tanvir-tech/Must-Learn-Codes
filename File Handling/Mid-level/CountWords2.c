#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    char word[50], temp[50];
    int count = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    while (fscanf(fp, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0)
            count++;
    }

    fclose(fp);

    printf("'%s' found %d times.\n", word, count);

    return 0;
}
