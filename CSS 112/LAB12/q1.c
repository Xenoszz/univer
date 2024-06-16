#include <stdio.h>

int main(){
    int dd,mm,yy,i,term = 75;
    char month[13][4] ={" ","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int maxday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Input dd,mm,yyyy : ");
    scanf("%d %d %d",&dd,&mm,&yy);

    if(yy % 4 == 0){
        maxday[2] = 29;
    }

    for (int i = 0; i < term; i++) {
        dd++;
        if (dd > maxday[mm]) {
            dd = 1;
            mm++;
            if (mm > 12) {
                mm = 1;
                yy++;
            }
        }
    }
    printf("Due date: %d %s %d\n", dd, month[mm], yy);


}