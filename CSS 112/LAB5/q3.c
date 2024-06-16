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
        for(j=1; j<= end-i; j++)
        {
            printf("    ");

        }
        for(j=j; j<= end; j++)
        {
            printf("%4d",i*j);


        }

    }

return 0;
}

