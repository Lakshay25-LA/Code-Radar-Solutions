// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a % 5 == 0 && a % 11 == 0) {
        printf("Divisible",a);
    }
    else (
        printf("Not Divisible",a);
    )
    return 0;
}