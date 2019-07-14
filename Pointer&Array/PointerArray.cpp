//Simple array example with pointer
#include<stdio.h>
int main()
{
	int *a[5],i;
	printf("\nEnter 5 numbers:\n");
	for(i=0;i<5;i++)
	scanf("%d",(a+i));
	printf("Display array of elements:\n");
	for(i=0;i<5;i++)
	printf("%d\n",*(a+i));
	return 0;
}
