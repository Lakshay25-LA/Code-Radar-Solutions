// Your code here...
#include <stdio.h>

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible", num);
    } else {
        printf("Not Divisible", num);
    }

    return 0;
}
