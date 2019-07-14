//Using malloc to sort the integer and display it in ascending order
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i,n,j,temp;
	printf("Entre no. of elements in an arrya:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int)); //USING MALLOC 
	printf("Entre the elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
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
   	printf("Array of sorted elements are:");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	return 0;
}
