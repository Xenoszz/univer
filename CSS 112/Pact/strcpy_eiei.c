#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char x[4][10] = {"0025MTH","62MIC","053PHY","75CHM"};
    char y[20];
    int z[10],i,j;
    for(i = 0;i < 4; i++){
        strcpy(y,x[i]);
        z[i] = atoi(y);
        printf("%d\n",z[i]);
        printf("%s\n",y);
    }
    for(j=0;j<3;j++){
        if(strcmp(x[j],x[j+1])>0)continue;
            else{strcat(y,x[j]);
                printf("#%d %-20s %d\n",j,y,z[j]);}
        }
}


/*
50 53 77 84 72
54 50 77 73 67
-4  3  0 11  5




*/