//Program to find the factorial
#include<stdio.h>
int main()
{
   long	int i,f=1,n;
	printf("Entre any number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("The factorial of %d is %d",n,f);
	return 0;
}
/* Output
Entre any number:10
The factorial of 10 is 3628800
*/


