#include <stdio.h>

int main(){
    int num,i;
    char cha;
    printf("num ");
    scanf("%d", &num);
   cha = getch();

    for(i=0; i<=num; i++)
    // printf("%c",c);
        printf("%c",cha);

    return 0;
}