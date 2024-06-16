#include <stdio.h>
#include <math.h>
int xbar(int n[100]);

int main(){
int n[100],i;
float bar,lengh,sumbar = 0,summean = 0,sum = 0,mean = 0;
for(i=1;;i++){
    printf("score[%d] : ",i);
    scanf("%d",&n[i]);
    if(n[i]<0)break;
        lengh++;
}
//xbar
for(i=1;i<=lengh;i++){
    sumbar += n[i];
}
bar = sumbar/lengh;
//xi-xbar
for(i=1;i<=lengh;i++){
    mean += pow((n[i]-bar),2);
}
sum = sqrt(mean/lengh);
printf("=========================");
printf("\nvalue of sd = %f",sum);
printf("\n=========================");

return 0;
}