#ARRAY 
#CPAI_(COPY-PASTE-ANALYZE-IMPROVE)

/*P8.1 Program to input values from user into an array and display them*/
#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);// initialization of 1D array
	}
	printf("The array elements are : \n");
	for(i=0; i<5; i++)
		printf("%d,%d\t",arr[i],&arr[i]);
	printf("\n");
	return 0;
} 

INBOX THE OUTPUT

