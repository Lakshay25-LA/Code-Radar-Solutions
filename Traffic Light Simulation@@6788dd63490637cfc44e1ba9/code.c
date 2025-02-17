// Your code here...
#include <stdio.h>
int main()  {
    char light;
    scanf("%c",&light);

    if(light == R){
        printf("Stop");
    }
    else if(light == G){
        printf("Slow Down");

    }
    else if(light == Y){
        printf("Go");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}