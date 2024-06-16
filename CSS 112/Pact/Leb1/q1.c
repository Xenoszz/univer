#include <stdio.h>

int main(){
    char x[100] = {'@','#','&','+','-','*','/'};
    int i;
    for(i=0;i<7;i++){printf("%c = %.2x\n",x[i],x[i]);}
}