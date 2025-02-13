#include <stdio.h>

int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE letter.\n", ch);
    }
    
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE letter.\n", ch);
    }
    /
    else {
        printf("'%c' is NOT a letter.\n", ch);
    }

    return 0;
}
