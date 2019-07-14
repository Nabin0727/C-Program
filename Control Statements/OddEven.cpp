//Program using if statement to find odd and even
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any value:");
	scanf("%d",&a);
	if(a%2==0)
	{
	printf("The value %d is even",a);}
	else{
	printf("The value %d is odd",a);}
	return 0;
}
