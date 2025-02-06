#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int welcome;
    scanf("%s",&welcome)
    printf("%s", welcome());
    return 0;
}