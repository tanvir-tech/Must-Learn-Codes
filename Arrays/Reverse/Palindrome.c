#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("'%s' is a palindrome\n", str);
    } else {
        printf("'%s' is not a palindrome\n", str);
    }
    
    return 0;
}