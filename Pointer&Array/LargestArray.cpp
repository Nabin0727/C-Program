//Largest elemet in the array
#include<stdio.h>
int main()
{
	int a[100],i,n,lar;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
    }
lar=a[0];
for(i=1;i<n;i++)
{
	if(a[i]>lar)
	lar=a[i];
}
   	printf("The Greatest number is: %d",lar);
   	
			return 0;
}
