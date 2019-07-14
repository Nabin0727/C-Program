//Program to print 3*3 matrix using two dinemsional array
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Entre the numbers:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 3*3 matrix is:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
return 0;	
}
