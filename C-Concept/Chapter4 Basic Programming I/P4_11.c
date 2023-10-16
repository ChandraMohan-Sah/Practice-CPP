/*P4.11 Program to illustrate the use of cast operator*/
#include<stdio.h>
int main(void)
{
	int x=211,y=3;
	float p,q;
	p=x/y;		
	printf("p=%f\n",p);
	q=(float)x/y;
	printf("q=%f\n",q);
	return 0;
}
