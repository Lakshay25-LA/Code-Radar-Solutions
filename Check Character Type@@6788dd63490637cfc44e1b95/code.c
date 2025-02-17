// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Taking user input
    scanf("%c", &ch);

    // Checking if the character is a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    }
    // Checking if the character is an alphabet
    else if (isalpha(ch)) {
        // Converting to lowercase for uniformity
        ch = tolower(ch);
        
        // Checking if it's a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // If it's not a digit or alphabet, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
