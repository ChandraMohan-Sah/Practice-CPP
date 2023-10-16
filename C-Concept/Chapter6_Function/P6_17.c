#FUNCTION
#CPAI_(COPY-PASTE-ANALYZE-IMPROVE)
/*P6.17 Reverse the number */
  
#include<stdio.h>
int reverse(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("%d\n",reverse(num));	
	return 0;
}
int reverse(int n)
{
	int R,sum=0;
	do
	{       R=n%10;
		sum=sum*10+R;
		n/=10;
	}while(n>0);
	return sum;
}

INBOX THE OUTPUT
