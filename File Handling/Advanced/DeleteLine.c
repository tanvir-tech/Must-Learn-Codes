#include <stdio.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("Error opening files!\n");
        return 0;
    }

    int delLine, currentLine = 1;
    char buffer[200];

    printf("Enter line number to delete: ");
    scanf("%d", &delLine);

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (currentLine != delLine)
            fputs(buffer, temp);
        currentLine++;
    }

    fclose(fp);
    fclose(temp);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Line deleted.\n");

    return 0;
}
