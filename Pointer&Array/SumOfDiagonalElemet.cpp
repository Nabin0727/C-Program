//Program to print 3*3 matrix using two dinemsional array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100][100],m,n,i,j,sum=0;
	printf("Enter the value of rows and column:");
	scanf("%d%d",&m,&n);
	printf("Entre the numbers for matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
    	{
		sum=sum+a[i][j];
    	}
		}
	}

	printf("Sum of diagonal elemnt: %d",sum);
return 0;	
}
