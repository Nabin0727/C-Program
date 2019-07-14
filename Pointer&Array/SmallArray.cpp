//Smallest number in array
#include<stdio.h>
int main()
{
	int a[100],i,n,sml;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
}
sml=a[0];
for(i=1;i<n;i++)
{
	if(a[i]<sml)
	sml=a[i];
}
   	printf("The smallest number is: %d",sml);
			return 0;
}
