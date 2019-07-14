//Program to find the maxium and minimun using pointer malloc
#include<stdio.h>
#include<stdlib.h>
void maxmin(int *, int);
int main()
{
	int *p,i,n;
	printf("Entre the value of n:\n");
	scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
	printf("Enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	maxmin(p,n);
	return 0;
}
void maxmin (int *p,int n)
{
	int i,max,min;
	max=*(p+i);
	min=*(p+i);
	for(i=1;i<n;i++)
	{
		if(*(p+i)>max)
		max=*(p+i);
		if(min>*(p+i))
		min=*(p+i);
}
	printf("\nThe largest value is %d\n",max);
	printf("\nThe smallest value is %d\n",min);
}
