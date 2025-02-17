#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Taking input: two integers and an operator
    scanf("%d %d %c", &num1, &num2, &op);
    
    // Using switch-case to perform the calculation
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n"); // Handling division by zero
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n"); // Invalid operator case
    }

    return 0;
}
