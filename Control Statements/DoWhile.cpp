//Do while example  
#include<stdio.h>
int main()
{
	int i = 0, n, sum = 0;
	printf("Entre the value of n:");
	scanf("%d",&n);
do	{
	i++;
	//Checking if num divisible by 5 or not
	if(i%5==0)
	sum=sum+i;
	}while(i<=n);
printf("The sum upto %d numbers divisible by 5 is: %d",n,sum);
	return 0;
}
