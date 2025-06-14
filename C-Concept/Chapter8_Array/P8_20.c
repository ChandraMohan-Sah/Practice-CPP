 /*P8.20 Selection sort(Print elements in ascending order)*/
#include<stdio.h>
#define MAX 100
int main(void)
{
	int arr[MAX],i,j,n,temp,min;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	/*Selection sort*/
	for(i=0; i<n-1; i++)
	{
		/*Find the index of smallest element*/
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[min]>arr[j])
				min=j ;
		}
		if(i!=min)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp ;
		}
	}
	printf("Sorted list is : \n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
