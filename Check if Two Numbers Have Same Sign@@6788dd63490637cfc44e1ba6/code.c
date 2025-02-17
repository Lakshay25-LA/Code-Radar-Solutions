#include <stdio.h>

int haveSameSign(int a, int b) {
    return (a ^ b) >= 0;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if they have the same sign
    if (haveSameSign(num1, num2)) {
        printf("The numbers %d and %d have the same sign.\n", num1, num2);
    } else {
        printf("The numbers %d and %d have opposite signs.\n", num1, num2);
    }

    return 0;
}
