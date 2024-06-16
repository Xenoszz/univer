#include <stdio.h>

int main(){
    float num[4];
    int i;
    printf("Input the values of four numbers :");
    for(i=0; i<4;i++){
        scanf("%f",&num[i]);  
    }
    printf("\n 1st Number = %.2f, 2nd Number = %.2f, 3rd Number = %.2f, 4th Number = %.2f",num[0],num[1],num[2],num[3]);
    
    float max = num[0];
    for(i=0; i<4; i++){
        if (num[i]> max){
            max = num[i];
        }
    }

    if(num[0] == max){
        printf("\n The 1st Number is the greatest among four.");
    }
    else if (num[1]== max)
    {
        printf("\n The 2nd Number is the greatest among four.");
    }
    else if (num[2]== max)
    {
        printf("\n The 3rd Number is the greates among four.");
    }
    else{
        printf("\n The 4th Number is the greates among four.");
    }
    
    return 0;
}


