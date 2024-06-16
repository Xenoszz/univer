#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    while (num <= 10)
    {
        if(num%2 == 0) printf("%d\n",num);
        num++;

    }
}