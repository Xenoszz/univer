#include <stdio.h>
#include <math.h>

int fnp(int n);

int main(){
    int n,sum;
    printf("Input n : ");
    scanf("%d",&n);
    sum = fnp(n);
    printf("Output f(%d) = %d",n,sum);
}

int fnp(int n){

    if (n == 0)return 1;
        else if (1 <=n && n <= 2) return 2;
            else return (fnp(n-1))+(fnp(n-2));
}
