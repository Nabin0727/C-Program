//Program to check the palindrome number
#include<stdio.h>
int main(){
	int p,r,n,rev=0;
	printf("Enter any number:");
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}	
  
  if(rev==p)
  	printf("The given number is palindrome");
  else
  	printf("The given number is  not palindrome");
  
	return 0;
	}
