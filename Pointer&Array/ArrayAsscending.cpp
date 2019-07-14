//Array Ascending Order
#include<stdio.h>
int main()
{
	int a[10],i,n,temp,j;
	printf("\nEnter any number:\n");
	scanf("%d",&n);
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
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
			
		}
   }
   	printf("\nThe ascending order is:\n");
for(i=0;i<n;i++)
{
	printf(" %d",a[i]);
}
		
			return 0;
}
/* Output:
Enter any number:5
1 8 7 96 5
Before swap:1 8 8 96 96 
The ascending order is: 1 5 7 8 96
*/
