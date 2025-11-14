#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int n = strlen(str);
    int start = 0;
    
    // Reverse entire string first
    reverse(str, 0, n - 1);
    
    // Reverse each word individually
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
}

void reverse(char str[], int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    reverseWords(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}