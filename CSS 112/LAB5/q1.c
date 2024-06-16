#include <stdio.h>

int main(){
    int begin,end,i,j;
    printf("Begin : ");
    scanf("%d",&begin);
    printf("End : ");
    scanf("%d",&end);

    for(i = begin; i<=12; i++)
    {
        for(j = begin; j<= end; j++){
            printf("%2d*%2d =%3d  ",j,i,i*j);
        }
    printf("\n");
    }

return 0;
}

