#include <stdio.h>
#include <conio.h>
int main(){
    int a[100],*arr,i,n,j,g[100],gcd,min,m[100],flag = 0;
    arr = &a[1];
    printf("input array a:\n");
    printf("--------------\n");
    for(i=1;;i++){
        printf("a[%d] = ",i);
        scanf("%d",arr);
        if(*arr < 0){break;}
        arr++;
    }
    n = i-1;
//min
    arr = &a[1];
    min = *arr;
    for(i=1;i<n;i++){
        if(*arr < min){
            min = *arr;}
        arr++;
    }
    for(i=1;i<min;i++){
        arr = &a[1];
        flag = 0;
        for(j=2;j<n;j++){
            if(*arr%i != 0){
                flag = 1;
                break;
            }
        arr++;
        }
        if(flag == 0)gcd = i;
    }
    printf("--------------\n");
    printf("The GCD = %d",gcd);
    return 0;
}


