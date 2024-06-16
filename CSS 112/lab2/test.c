#include <stdio.h>
// ประกาศตัวแปร
int day,year,month;

// ประกาศฟังก์ชัน
int cal_year();
int cal_month();
int cal_day();

int main() {
    //input
    printf("Enter the number of days: ");
    scanf("%d", &day); 

    //output 
    printf("year: %d\n",cal_year());
    printf("month: %d\n",cal_month());
    printf("Day: %d\n",cal_day());

    return 0;
}

int cal_year(){
    year = day / 365;
    return year;

}

int cal_month(){
    day = day % 365;
    //mod เพื่อเอาเศษวันที่เหลือจากปี
    month = day / 30;
    return month;
}

int cal_day(){
    day = day % 30;
    //mod เพื่อเอาเศษที่เหลือจากเดือน
    

    return day;
}
