#include <stdio.h>

int main() {
    int n1, n2;
    
    // Taking input for two numbers
    scanf("%d %d", &n1, &n2);
    
    // Checking if n1 is a multiple of n2
    if (n2 != 0 && n1 % n2 == 0) { 
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
