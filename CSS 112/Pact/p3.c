#include <stdio.h>

int main(){
    int sumg;

    scanf("%d",&sumg);

    if (sumg >= 80 && sumg < 100) printf("A");
    else if (sumg >= 70 && sumg < 79) printf("B");
    else if (sumg >= 60 && sumg < 69) printf("C");
    else if (sumg >= 50 && sumg < 59) printf("D");
    else printf("F");

    return 0;
}