//Returning value
#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	int c=add(a,b);
	printf("\n Sum: %d",c);
	return 0;
}
int add(int x, int y)
{
	return(x+y);

}
