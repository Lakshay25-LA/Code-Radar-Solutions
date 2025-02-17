#include <stdio.h>

int main() {
    int num1, num2;


    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

   
    if (haveSameSign(num1, num2)) {
        printf("Same Sign");
    }
     else {
        printf("Different Sign");
    }

    return 0;
}
