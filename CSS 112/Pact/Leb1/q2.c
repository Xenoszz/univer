#include <stdio.h>
#include <math.h>

int main(){
    float ans, x[100] = {2.25,4.16,6.17,7.18,6.19},root,sum,product = 1;
    int i;
    for(i=0;i<=5;i++){
        product *= x[i];
    }
    root = 1/5;
    sum = pow(product,root);
    printf("%.3f",sum);

}