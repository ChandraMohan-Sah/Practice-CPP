#ARRAY 
BASIC-I
#CPAI_(COPY-PASTE-ANALYZE-IMPROVE)
/*P8.5 Program to reverse the elements of an array*/
#include<stdio.h>
int main(void)
{
	int i,j,temp,arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0,j=9; i<j; i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("After reversing, the array is : ");
	for(i=0; i<10; i++)
		printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}

/* EASY METHOD 
#include<stdio.h>
#define N 5
int main()
{
	 int a[N],i;
	 for(i=0;i<N;i++)
	 {
		 printf("Enter a value for a[%d]",i);//Input from user
		 scanf("%d",&a[i]);

	 }
	 printf("Elements of array in reverse order is :");
	 for(i=N-1;i>=0;i--)   //print the array backwards
	 printf("%d\t",a[i]);

	return 0;

}*/

INBOX THE OUTPUT
