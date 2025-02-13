#include <stdio.h>

int main() {
    char ch;

    // Input from the user
  
    scanf("%c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase",);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }

    return 0;
}
