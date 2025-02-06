#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    scanf("%s",&welcome)
    printf("%s", welcome());
    return 0;
}