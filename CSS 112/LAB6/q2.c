#include <stdio.h>
#include <conio.h>

int main(){
    char name[100];
    int i,n,j;
    printf("input name-surname :");
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        if (n == 1){
            printf("%c",name[i]);
        }
        if (name[i] == ' '){
            n++;
        }
    }
    printf(" ");
    for(j = 0;name[j]!=' ';j++){
        printf("%c",name[j]);
    }



}