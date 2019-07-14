//Program to print the Multiplication Table
#include<stdio.h>
int main()
{
     int i,j=2,k;
	 printf("Multiplication Table of 2\n");
	 for(i=1;i<=10;i++)
	 {
		
			k=j*i;
		printf("%d*%d=%d\n",j,i,k);
	 }
		return 0;
}
