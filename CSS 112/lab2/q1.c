
#include <stdio.h>
#include <math.h>

int integer,ranges,i ;
int main() {
    printf("Enter integer ");
    scanf("%d",&integer);
    printf("Enter ranges ");
    scanf("%d",&ranges);
    for (i=1;i<=ranges;i++)
    {
        printf("%d X %d = %d\n",integer,i,i*integer);
    }

    return 0;
}



