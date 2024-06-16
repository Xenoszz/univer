#include <stdio.h>
#include <conio.h>

int main(){
    int a[100],b[100],c[100],i,j,flag = 0;

    printf("input set a : \n");
    printf("-------------\n");
    for(i=1;;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        if(a[i]<0)break;}

    printf("\ninput set b : \n");
    printf("-------------\n");
    for(i=1;;i++){
        printf("b[%d] = ",i);
        scanf("%d",&b[i]);
        if(b[i]<0)break;}

    for(i=1;a[i]>=0;i++){
        for(j=1;b[j]>=0;j++){
            if(a[i] == b[j]){
                c[flag] = a[i];
                flag++;

            }
        }
    }
    printf("\n-------------\n");

    printf("The intersection of set A and B : {");
    for(i=0;i<flag;i++){
        if(i>0){
            printf(",");
        }
        printf("%d",c[i]);
    }
    printf("}");
    getch();
    return 0;
}