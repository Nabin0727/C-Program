//Array Descending Order
#include<stdio.h>
int main()
{
	int a[10],i,n,temp,j;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Enter %d numbers\n",n);	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		
}
		printf("\nBefore swap:\n");
			for(i=0;i<n;i++)
		printf("%d ",a[i]);
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
			
		}
   }
   	printf("\nThe descending order is:\n");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
	
}
		
			return 0;
}
/* Output:
Enter any number:5
9 8 7 5 2
Before swap:9 8 7 5 2 
The descending order is: 9 8 7 5 2
*/
