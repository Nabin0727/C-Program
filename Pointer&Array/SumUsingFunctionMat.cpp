//Using function sum of two matrix
#include<stdio.h>
#define p 10
#define q 10
void matsum( int [q][p], int [q][p],int, int);
int main()
{
	int a[q][p],b[q][p],m,n,i,j;
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
	
	matsum(a,b,m,n);
	return 0;
}
void matsum( int a[q][p],int b[q][p],int m,int n)
{
	int i,j,c[q][p],sum=0;
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
		
}
