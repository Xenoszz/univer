#include <stdio.h>

int complie_tax();

int main(){
    char car_make[10], car_model[10];
    int c_c ;


    printf("what is your car make : ");
    gets(car_make);
    printf("what is your car model : ");
    gets(car_model);
    printf("Input the C.C. of your car : ");
    scanf("%d",&c_c);

    printf("Annual Registration Fee amount\n\n\n");
    printf("Car make\t\t\t\t:");
    puts(car_make);
    printf("Model\t\t\t\t\t:");
    puts(car_model);
    printf("Engine Capacity (C.C.)\t\t\t:%d",c_c);

    complie_tax(c_c);

    return 0;
}

int complie_tax(int c){
    float price_tax, ES, sum;
    if (c <= 600)
    {
        price_tax = (c*0.5);
    }
    else if (c >= 601 && c <= 2000)
    {
        price_tax = (600*0.5) + ((c-600)*1.50);
    }
    else 
    {
        price_tax = (600*0.5) + ((2000-600)*1.50) + ((c-2000)*4.00);
        ES = (c*0.25);
    }
    sum = price_tax + ES ;
    printf("\nAnnual Registration Free\t\t:%.2f", price_tax);
    printf("\nEmission Surchange Amount\t\t:%.2f", ES);
    printf("\nNet Amount of Registration Fee\t\t:%.2f", sum);
    return 0;
}
