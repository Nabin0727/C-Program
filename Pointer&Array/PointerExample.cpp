//Pointer example
#include<stdio.h>
int main()
{
	int x=10, y=1;
	int *p=&x, *q=&y;
	printf("\nThe value of X is %d\n",*p);
	printf("\nThe value of X is %d\n",x);
	printf("\nThe value of Y is %d\n", *q);
	printf("\nThe value of Y is %d\n",y);
	printf("\nSum of two numbers %d and %d is: %d\n",x,y,*p+*q);
	printf("\nThe differnce of %d and %d is: %d\n",x,y,*p-*q);
	printf("\nThe product of %d and %d is: %d\n",x,y,*p**q);
	printf("\n*********Int Address*********\n");
	printf("\nThe memory address of X is %u\n",&x);
	printf("\nThe memory address of Y is %u\n",&y);
	return 0;
}
