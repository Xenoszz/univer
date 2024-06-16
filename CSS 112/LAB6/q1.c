#include <stdio.h>
#include <conio.h>

int main(){
    int a[100],i,num,odd[100],even[100],todd = 0,teven = 0;

    for(i = 0;;i++){
    printf("input Array a :");
    scanf("%d",&a[i]);
    if(a[i] <= 0)break;
    num++;
    }
    num--;
    for(i = 0;i <= num;i++){
        if (a[i] % 2 == 0){
            even[teven] = a[i];
            teven++;
        }
        else{
            odd[todd] = a[i];
            todd++;
        }
    }
    
    printf("Odd number : ");
    for(i = 0;i < todd ;i++ ){
        printf("%3d",odd[i]);
    }
    printf("\nEven number : ");
    for(i = 0;i < teven; i++){
        printf("%3d",even[i]);
    }
    
    return 0;
}