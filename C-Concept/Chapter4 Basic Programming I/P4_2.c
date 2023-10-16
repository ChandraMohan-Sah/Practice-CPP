/*P4.2 Program to understand the floating point arithmetic operation */
#include<stdio.h>
int main(void)
{
	float a=12.4,b=3.8;
	printf("Sum=%f\n",a+b);// takes u upto 6 digits after decimal
	printf("Difference=%.2f\n",a-b);
	printf("Product=%.2f\n",a*b);
	printf("a/b=%.2f\n",a/b);
	return 0;
}
