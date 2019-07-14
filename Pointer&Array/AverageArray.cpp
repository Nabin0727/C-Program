//Average of the array elements
#include<stdio.h>
int main()
{
	int num[100],sum=0,i,n;
	float average;
	printf("How many no. do you want to enter:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
			}
			average=sum/n;
			printf("Aaverage is: %f", average);
			return 0;
}
