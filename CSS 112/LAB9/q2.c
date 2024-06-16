#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int base, i, numstr = 0, sum = 0,hex,x;
    char num[10],a[2];

    printf("Input Number : ");
    gets(num);
    printf("Number is base : ");
    scanf("%d",&base);

    numstr = strlen(num);
    x = numstr -1;

    if(base == 2){
        for(i=0;i < numstr ;i++){
            a[0] = num[i];
            sum += atoi(a) * pow(base,x); 
            x--;
            }
        printf("Number is decimal : %d",sum);
    }

    if(base == 8){
        for(i = 0; i < numstr; i++){
            a[0] = num[i];
            sum += atoi(a) * pow(base,x); 
            x--;
        }
        printf("Number is decimal : %d",sum);
    }

    if(base == 16){
        for(i=0;i < numstr ;i++){
            if (num[i] >= 'A' && num[i] <= 'F'){
                hex = num[i] -55;
                sum += hex * pow(base,x); 
                x--;
            }
            else {
                a[0] = num[i];
                sum += atoi(a) * pow(base,x);
                x--;
            }
        }
    printf("Number is decimal : %d",sum);
    }

    return 0;
}


