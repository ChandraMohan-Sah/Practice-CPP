#ARRAY 
BASIC-I
#CPAI_(COPY-PASTE-ANALYZE-IMPROVE)
/*P8.10 Program to input and display a matrix*/
#define ROW 3
#define COL 4
#include<stdio.h>
int main(void)
{
	int mat[ROW][COL],i,j;
	printf("Enter the elements of the matrix(%dx%d) row-wise :\n",ROW,COL);
	for(i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
			scanf("%d",&mat[i][j]);

	printf("The matrix that you have entered is :\n");
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
			printf("%5d",mat[i][j]);// trying to get 4 spaces and lastly the actually number (in total 5 bolcks for %5d)
		printf("\n");
	}
	printf("\n");
	return 0;
}

INBOX THE OUTPUT

