// Your code here...
#include <stdio.h>
int main() {
    int n1,n2;

    scanf("%d %d", &n1, &n2);

    if (n2 !=0 && n1 % n2 == 0){
        printtf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}