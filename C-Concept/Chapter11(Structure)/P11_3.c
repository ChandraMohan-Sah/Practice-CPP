/*P11.3 Array of structures*/
/* An array in which each element is of type structure */


#include<stdio.h>
struct student
{
    char name[20];
	int rollno;
	float marks;
};
int main(void)
{
	int i;
	struct student stuarr[10]; //An Array
	for(i=0; i<10; i++)
	{
		printf("Enter name,rollno and marks : "); 
		scanf("%s%d%f",stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks); //each element of type structure
	}
	for(i=0; i<10; i++)
		printf("%s %d %f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
	return 0;
}
