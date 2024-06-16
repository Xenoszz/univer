#include <stdio.h>
#include <math.h>
#define pi  3.14
float area_circle();
float area_rectangle();
float area_triangle();
    
int main(){
    int qus = 0;
    printf("Input 1 for area of circle \nInput 2 for area of rectangle \nInput 3 for area of triangle \n");
    printf("Input tour choice : ");
    scanf("%d", &qus);
    
    if (qus == 1)
    {
        area_circle();
    }
    else if (qus == 2)
    {
        area_rectangle();
    }
    else if (qus == 3)
    {
        area_triangle();
    }

    return 0;

}

float area_circle(){
    float area,radius;
    printf("Input radious of the circle ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("The area is : %f",area);
    return 0;

}

float area_rectangle(){
    int arr[2];
    float ans;
    printf("Input length and width of the rectangle: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The area is : %f",ans=arr[0]*arr[1]);
    return 0;
}


float area_triangle(){
    int arr[2];
    float ans;
    printf("Input the base and height of the triangle: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The area is : %f",ans=0.5*arr[0]*arr[1]);
    return 0;
}
