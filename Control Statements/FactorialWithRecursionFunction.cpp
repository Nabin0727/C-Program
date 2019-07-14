//Factorial using the recursion function
#include<stdio.h>
int fact (int);
int main()
{
	int f,n;
	printf("Entre a number:");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorail is %d",f);
	return 0;
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return(n*fact(n-1));
}
