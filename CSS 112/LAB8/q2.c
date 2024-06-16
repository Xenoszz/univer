#include <stdio.h>
#include <conio.h>

int main(){
    int a[100],b[100],i,j,flag = 0,numc = 0;
    int *seta,*setb;

    seta =&a[1];
    setb =&b[1];
    printf("input set a : \n");
    printf("-------------\n");
    for(i=1;;i++){
        printf("a[%d] = ",i);
        scanf("%d",seta);
        if(*seta<0)break;
        seta++;}
    printf("=================\n");
    printf("input set b : \n");
    printf("-------------\n");
    for(i=1;;i++){
        printf("b[%d] = ",i);
        scanf("%d",setb);
        if(*setb<0)break;
        setb++;}
    
    printf("=================\n");
    printf("A - B = {");
    seta =&a[1];
    setb =&b[1];

    for(i=1;;i++){
        if(*seta < 0)break;
        for(j=1;*setb>0;j++){
            if(*seta == *setb){flag = 1;}
            setb++;
        }
        if(flag == 0){
            if(numc > 0){printf(",");}
        printf("%d",*seta);
        numc++;
        }
    flag = 0;
    seta++;
    setb =&b[1];
    }
    printf("}");
    printf("\n=================");
    getch();
    return 0;
}