//Program to print the fibonacci series
#include<stdio.h>
int main()
{
	int i,n,f1=0,f2=1,f3;
	printf("Enter any number:");
		scanf("%d",&n);
	for(i=0;i<=n;i++)
		{
		printf("%d ",f1);
		f3=f1+f2;
		f1=f2;  
		f2=f3; 
	    }
	return 0;
}
