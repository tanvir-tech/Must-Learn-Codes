#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}