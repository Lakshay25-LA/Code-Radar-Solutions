#include <stdio.h>
int main() {
    int age;
    char name[100],hobby[100];
    scanf("%d",&age);
    scanf("%s%s",&name,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}