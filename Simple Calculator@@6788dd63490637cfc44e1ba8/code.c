#include <stdio.h>
int main() {
    int a,b,
    char calc;
    scanf("%d %d %c",&a,&b,&calc);

    if(calc == '+') {
        printf("%d",a + b);
    }
    else if(calc == '-') {
        printf("%d",a - b);
    }
    else if(calc == '*'){
        printf("%d",a*b);
    }
    else if(calc == '/'){
        printf("%d",a/b);
    }
    else{
        printf(error);
    }
    return 0;
}