#FUNCTION
#CPAI_(COPY-PASTE-ANALYZE-IMPROVE)
/*P6.4 Program  containing arihmetic operation of  two numbers*/

#include<stdio.h>
int sum(int x,int y);	/*Function declaration*/
int main(void)
{
	int a=10,b=20,k;
	k=sum(a,b);		/*Function call*/
	printf("%d\n",k);
	k=sum(4,5);		/*Function call*/
	printf("%d\n",k);
	k=sum(a+b,b*2);  /*Function call*/
	printf("%d\n",k);
	return 0;
}
int sum(int x,int y)   /*Function definition*/
{
	int s;
	s=x+y;	
	return s;
}

INBOX THE OUTPUT
