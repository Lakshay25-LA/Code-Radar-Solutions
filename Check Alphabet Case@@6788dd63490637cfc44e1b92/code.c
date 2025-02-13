#include <stdio.h>

int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase", ch);
    }
    
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase", ch);
    }
    /
    else {
        printf("Not an alphabet", ch);
    }

    return 0;
}
