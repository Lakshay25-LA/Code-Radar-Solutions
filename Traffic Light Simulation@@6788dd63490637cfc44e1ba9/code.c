// Your code here...
#include <stdio.h>
int main()  {
    char R,G,Y,light;
    scanf("%c",&R,&G,&Y);

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