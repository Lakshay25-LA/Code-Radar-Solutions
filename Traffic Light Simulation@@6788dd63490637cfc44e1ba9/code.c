// Your code here...
#include <stdio.h>
int main()  {
    char R,G,Y,light;
    scanf("%c",&R,&G,&Y);

    if(light == R){
        printf("Stop");
    }
    else if(light == G){
        printf("Go");

    }
    else if(light == Y){
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}