#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
swap(&a,&b);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	printf("Before swap the value of a is %d  and b is %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swap value of a is %d and b is %d",a,b);
}
