#include <stdio.h>
int year,month,day,in;

int cal_year();
int cal_month();
int cal_day();

int main(){
    printf("Enter the number of days: ");
    scanf("%d",&in);

    printf("Years : %d\n",cal_year());
    printf("Month : %d\n",cal_month());
    printf("Day : %d\n",cal_day());
}

int cal_year(){
    year = in/365;
    return year;
}

int cal_month(){
    month = in%365;
    month = month/30;
    return month;

}
int cal_day(){
    day = ((in%365)%30);
    return day;

    
}