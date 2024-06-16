#include <stdio.h>

int main(){
    int in,i,range;
    printf("Enter an integer: ");
    scanf("%d",&in);
    printf("Enter range (in postitive number only): ");
    scanf("%d",&range);
    for(i=1;i<=range;i++){
        printf("%d * %d = %d\n",in,i,i*in);
    }



}