//Product of two matrix
#include<stdio.h>
void matpro(int n1[6][6],int n2[6][6],int,int);
int main()
{
	int n1[6][6],n2[6][6],k,i,j,m,n;
		printf("Entre no.of row and colum:");
			scanf("%d%d",&m,&n);
	printf("Entre the numbers for first matrix:");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&n1[i][j]);
	printf("Entre the numbers for second matrix:");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&n2[i][j]);

	matpro(n1,n2,m,n);

return 0;
}
void matpro( int n1[6][6], int n2[6][6],int m,int n)
{
	int i,j,c[6][6],k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<m;k++)
			{
				c[i][j]=c[i][j]+n1[i][k]*n2[k][j];

			}
		}
		
	}
	printf("The product of two matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
	
 
