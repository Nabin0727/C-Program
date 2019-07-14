//Program to check whether the given number is prime or not
#include<stdio.h>
int main()
{
	int i,r,count=1,n;
	printf(" Enter any Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	
			r=n%i;
			if(r==0)
			{
				count=0;
				break;
			}
		}
			if(count==1)
			{
			printf("The given number is Prime.");

			}
			else
			printf("The given number is  Not Prime.");
			
			
	return 0;
}
