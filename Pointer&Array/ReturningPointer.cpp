//Returning the pointer
#include<stdio.h>
#include<stdlib.h>
int *largest(int *, int*);
int main()
{
	int a,b,great;
	printf("Entre two numbers:\n");
	scanf("%d%d",&a,&b);
	great=*largest(&a,&b);
	printf("The largest is %d",great);
	return 0;
}
int *largest (int *x,int *y)
{
	if(*x>*y)
	return x;
	else
	return y;
}
