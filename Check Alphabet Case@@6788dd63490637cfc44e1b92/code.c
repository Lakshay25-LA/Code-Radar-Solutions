// Your code here...
#include <stdio.h>
int main () {
    char lol;
    scanf("%c",&lol);
    if (lol >= 'A'&& lol <= 'Z' ){
        printf("Uppercase",ch);
    }
    else if (lol >= 'a' && lol <= 'z') {
            printf("Lowercase",ch);
        }
        else {
            printf("Not an alphabet",ch);
        }
        return 0;
    }
}