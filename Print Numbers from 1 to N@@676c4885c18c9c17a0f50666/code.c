#include <stdio.h>

int main() {
    int N;
    
    // Taking input
    scanf("%d", &N);
    
    // Loop from 1 to N
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        
        // Print space only if it's not the last number
        if (i < N) {
            printf(" ");
        }
    }

    return 0;
}
