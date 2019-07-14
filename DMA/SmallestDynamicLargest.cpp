//Program to find the smallest and the largest using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void maxmin(int *, int);
int main()
{
	int *p;
	int i,n;
	printf("Entre no. of elements in an arrya:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Entre the elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	maxmin(p,n);

	return 0;
}
void maxmin( int*p, int n)
{
	int i,max,min;
	max=*(p+i);
	min=(*p+i);
	for(i=1;i<n;i++)
	{
	if(max<*(p+i))
	max=*(p+i);
	if(min>*(p+i))
		min=*(p+i);
}
printf("THe greatest number is %d and smallest is %d",max,min);
}
