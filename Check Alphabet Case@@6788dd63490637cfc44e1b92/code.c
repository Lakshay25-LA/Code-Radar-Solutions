// Your code here...
#include <stdio.h>
int main () {
    char lol;
    scanf("%c",&lol);
    if (lol >= 'A'&& lol <= 'Z' ){
        printf("Uppercase",lol);
    }
    else if (lol >= 'a' && lol <= 'z') {
            printf("Lowercase",lol);
        }
        else {
            printf("Not an alphabet",lol);
        }
        return 0;
    }
}