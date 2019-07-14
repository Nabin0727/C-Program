//Program to find the Fibonanci series using recurion
#include<stdio.h>
int fibo( int);
int main()
{
	int n,f;
	printf("Entre any numbers:");
	scanf("%d",&n);
	f=fibo(n);
	printf("The the fibonanci series is %d",f);
	return 0;
}
int fibo (int n)
{
	if(n==0 or n==1)
	return 1;
	else
	return (fibo(n-1)+fibo(n-2));	
}
