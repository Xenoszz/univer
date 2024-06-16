#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(){
    char st_name[100][50],nameword[1],lowername,searchlower;
    int i,flag = 1;
    for(i=1;;i++){
        printf("input name-surname : ");
        gets(st_name[i]);
        if(st_name [i][0] == '*') break;
        
    }
    printf("===================\n");
    printf("input search char : ");
    scanf("%s",nameword);

    for (i=1;;i++){
        if(st_name[i][0] == '*') break;
        lowername = tolower(nameword[0]);
        searchlower = tolower(st_name[i][0]);
        if(lowername == searchlower){
            printf("name %d is %s\n",flag, st_name[i]);
            flag++;
        }
    }
    return 0;
}