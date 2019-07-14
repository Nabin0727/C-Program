//Reading array using concept of array
#include <stdio.h>
int main () 
{

   int i,n,sum=0,avg=0;
   int *p;
   printf("Enter the value of n:");
   scanf("%d",&n);
     for ( i = 0; i < n; i++ ) 
	 {
      scanf("%d",(p+i));
      
    }
   for (i = 0; i <n; i++ )
   {
   	sum=sum+*(p+i); 	
     
   }
   avg=sum/n;
   printf("The sum is %d and the average is %d",sum,avg);
   return 0;
}
