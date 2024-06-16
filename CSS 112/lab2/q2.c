
#include <stdio.h>
#include <math.h>
float r1,r2,a,b,c,disc;	

int main()
{
	//input
    printf("Please Enter a value\n");
    scanf("%f",&a);
    printf("Please Enter b value\n");
    scanf("%f",&b);
    printf("Please Enter c value\n");
    scanf("%f",&c);
	//หายกกำลัง

	//ค่ายกกำลัง 2 ลบด้วย 4ac
	disc = pow(b,2)-(4*a*c);

	//หาค่าภายในรูทและส่วนข้างล่าง
	r1 = ((-b)+sqrt(disc))/(2*a);
	r2 = ((-b)-sqrt(disc))/(2*a);
	
	//output
	printf("Discriminamt is %.3f\n",disc);
	printf("First root is %.3f\n",r1);
	printf("Second root is %.3f\n",r2);
	
	return 0;
}
