//1-D array Malloc example for sorting element
#include<stdio.h>
#include<stdlib.h>
void sort(int *, int);
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
	sort(p,n);
	printf("Array of sorted elements are:");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	printf("\n ");
	return 0;
}
void sort( int*p, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
for(j=i+1;j<n;j)
{
	if(*(p+i)>*(p+j))
	{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
	}
}
}
