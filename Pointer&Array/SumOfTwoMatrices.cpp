//Program to print 3*3 matrix using two dinemsional array
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],m,n,i,j;
	printf("Enter the value of rows and column:");
	scanf("%d%d",&m,&n);
	printf("Entre the numbers for first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entre the numbers for second matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The m*n matrix is:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
		printf("The m*n matrix is:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of two matrixx is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
return 0;	
}
