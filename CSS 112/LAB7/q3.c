#include <stdio.h>
float findexpress(float x,float y);

int main(){
    float x,y,result;
    printf("Input express : ");
    scanf("%f %f",&x,&y);
    result = findexpress(x,y);
    printf("Output %f",result);
    return 0;
}

float findexpress(float x,float y){
    float result;
    result = x*y;
    return(result);
}