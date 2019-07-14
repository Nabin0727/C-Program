//Program to print the reverse of any number
#include<stdio.h>
int main(){
	int r,n,rev=0;
	printf("Enter any number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		//printf("%d ",r);
		n=n/10;
	}	
    printf("Reverse is: %d",rev);
	return 0;
	}
