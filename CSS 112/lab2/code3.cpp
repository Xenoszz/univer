#include<stdio.h>

int main(){
    int days;
    printf("Enter the number of days : ");
    scanf("%d", &days);
    date();
}

int date(int days,int months,int years){
    years = days/365;
    days = days%365;
    months = days/30;
    days = days%30;

    printf("Years : %d\nmonths : %d\nDays : %d",years,months,days);

}