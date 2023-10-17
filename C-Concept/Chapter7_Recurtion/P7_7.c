/*P7.7 Program to print prime factors

	A prime factor is a prime number that can exactly divide another 
	number without leaving a remainder. In other words, it is a prime 
	number that is a factor of a given integer.

For example : The prime factors of 12 are 2 and 3 because:
------------------------------------------------------------
	2 is a prime number, and 12 is divisible by 2 (12 ÷ 2 = 6, and 6 ÷ 2 = 3), so 2 is a prime factor of 12.

	3 is also a prime number, and 12 is divisible by 3 (12 ÷ 3 = 4), so 3 is a prime factor of 12.

*/

#include<stdio.h>
void PFactors(int num);
void IPFactors(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	PFactors(num);	printf("\n");
	IPFactors(num);	printf("\n");
	return 0;
}/*End of main()*/

void PFactors(int num)
{
	int i=2;
	if(num==1)
		return;
	while(num%i!=0)
		i++;
	printf("%d ", i);
	PFactors(num/i);
}/*End of PFactors()*/

/*Iterative*/
void IPFactors(int num)
{
	int i;
	for(i=2; num!=1; i++)
		while(num%i == 0)
		{
			printf("%d ",i);
			num = num/i;
		}
}/*End of IPFactors()*/