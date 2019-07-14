//Proram to print first 100 prime numbers
#include<stdio.h>
int main()
{
	int i,j,r, count;
	printf("Prime Numbers are:");
	for(i=1;i<=100;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			r=i%j;
			if(r==0)
			{
				count=count+1;
			}
		}
			
			if(count==2)
			{
				printf(" %d ",i);
			}
	}
	return 0;
}
