#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,discriminate,r1,r2,bpow;
    printf("Please entter a value\n");
    scanf("%f",&a);
    printf("Please enter b value\n");
    scanf("%f",&b);
    printf("Pleasee enter c value\n");
    scanf("%f",&c);

    discriminate = pow(b,2)-4.0*a*c;
    printf("Discriminate is %.3f",discriminate);

    r1 = (-b+(sqrt(discriminate)))/(2*a);
    r2 = (-b-(sqrt(discriminate)))/(2*a);

    printf("\nFirst root is %.3f",r1);
    printf("\nSecond root is %.3f",r2);
    
    return 0;

}