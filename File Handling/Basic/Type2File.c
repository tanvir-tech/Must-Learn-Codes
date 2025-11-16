#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("output.txt", "w");   // write mode (overwrite)

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 0;
    }

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);   // write text to file

    fclose(fp);
    return 0;
}
