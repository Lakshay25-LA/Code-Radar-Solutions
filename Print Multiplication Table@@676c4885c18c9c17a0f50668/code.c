#include <stdio.h>

int main() {
    int N;
    
    // Taking input for N
    scanf("%d", &N);

    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
