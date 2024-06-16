#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int i, base, count, dec, sum = 0,hex;
	char inp[10],a[2];
	
	printf("Input Number : ");
	gets(inp);
	printf("Number is base : ");
	scanf("%d",&base);
	count = strlen(inp);	
//	printf("%d\n",count);
	count = count - 1;
	if(base == 2){
		for(i=count;i>=0;i--){
			a[0] = inp[i];
			sum += atoi(a) * pow(base,count-i);
		}
		printf("%d",sum);
	}
}