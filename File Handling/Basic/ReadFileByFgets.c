#include <stdio.h>

int main() {
    FILE *fptr = fopen("input.txt", "r");
    
    // Reading the file data using fgets() in the
    // form of a block of size 30 bytes
    char buff[30];
    fgets(buff, sizeof(buff), fptr);
    printf("%s", buff);

    fclose(fptr);
    return 0;
}