//Finding the numbers of prime numbers and non prime numbers
#include<stdio.h>
int main()
{
	int a[10],i,r,p=0,prime=1,np=0,n,j;
	printf(" Enter any Number:");
	scanf("%d",&n);
	printf(" Enter  Numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	
	for(j=2;j<a[i];j++)
	{
				r=a[i]%j;
			if(r==0)
			{
				prime=0;
				break;
			}
	}

if(prime==1)
p=p+1;
else
np=np+1;
}
printf("The numbers of prime numbers are %d and non prime is %d",p,np);
			
	return 0;
}
