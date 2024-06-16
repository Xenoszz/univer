#include <stdio.h>

int main(){
    int end,i,j;
    printf("End ");
    scanf("%d",&end);
    printf("  ");
    for(i = 1; i<=end; i++)
    {
        printf("%4d",i);
    }
    for(i = 1; i<= end; i++)
    {
        printf("\n%2d",i);
        for(j=1; j<= i; j++)
        {
            printf("%4d",i*j);
        }
    }

return 0;
}

