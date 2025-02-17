#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if ((a == positive && b == positive) || (a == negative && b == negative)) {
        printf("Same Sign");
    }
    else {
        printtf("Different Sign");
    }
    return 0;
}