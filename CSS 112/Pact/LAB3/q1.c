#include <stdio.h>

int main(){
    int i;
    float in[5],max;

    printf("Input the values of four numbers : ");

    for(i=0;i<4;i++){
    scanf("%f",&in[i]);
    }
    printf("1st number = %.2f, 2st number = %.2f, 3st number = %.2f, 4st number = %.2f",in[0],in[1],in[2],in[3]);

    max = in[0];
    for(i=0;i<4;i++){
        if(in[i] > max){
            max = in[i];
        }
    }
    
    if(in[0] == max)printf("\nThe 1st Number is the greatest among four");
    else if(in[1] == max)printf("\nThe 2st Number is the greatest among four");
    else if(in[2] == max)printf("\nThe 3st Number is the greatest among four");
    else if(in[2] == max)printf("\nThe 4st Number is the greatest among four");

    



}