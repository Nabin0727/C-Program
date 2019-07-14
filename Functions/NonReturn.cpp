//Not Returning value
#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int x, int y)
{
	printf("\n Sum: %d",x+y);
;

}
