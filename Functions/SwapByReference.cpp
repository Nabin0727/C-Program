//Function swap by reference
#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("The value after the swap is %d and %d",a,b);
	return 0;
}
void swap(int *x, int *y)
{
	int *temp=0;
	temp=*x;
	x=y;
	y=temp;
}
