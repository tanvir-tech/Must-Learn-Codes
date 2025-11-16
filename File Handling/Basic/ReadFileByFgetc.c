#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }



    while (!feof(fp)) {   // check for end of file
        putchar(fgetc(fp));                    // get char and print to screen
    }

    fclose(fp);
    return 0;
}



// Alternative approach:--------------------------------------
    // while ((ch = fgetc(fp)) != EOF) {   // read char by char
    //     putchar(ch);                    // print to screen
    // }