#include <stdio.h>

int main(){

    int side1 = 0, side2 = 0,side3 = 0;
    printf("Input 1st side of triangle: ");
    scanf("%d",&side1);
    printf("Input 2st side of triangle: ");
    scanf("%d",&side2);
    printf("Input 3st side of triangle: ");
    scanf("%d",&side3);
    if((side1 == side2)&&(side2 == side3))
    {
        printf("\n This is an Equilateral triangle.");
    }
    else if (side1 == side3)
    {
        printf("\n This is an isosceles triangle.");
    }
    else if (side1 == side2)
    {
        printf("\n This is an isosceles triangle.");
    }
    else{
        printf("\n This is an Scalene triangle.");
    }

    return 0;
}