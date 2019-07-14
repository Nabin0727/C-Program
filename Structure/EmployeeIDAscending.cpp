//Employee records and sort in ascending according to ID number
#include<stdio.h>
#include<string.h>
#define N 100
#include<stdlib.h>
struct employee 
{
	int id;
	char design[20];
	float salery;
	char name[20];
	
} e[N];
int main()
{
	int n,i,j;
	printf("Enter the Numbers of Employees Of Which You Want To Keep Record:");
	scanf("%d",&n);
	printf("___Employees Record__:");
	for(i=0;i<n;i++)
	{
	 printf("\n Enter name of employee:\n");
	 scanf("%s",e[i].name);
	 	 printf("\n Enter the employee ID:\n");
	  scanf("%d",&e[i].id);
	 printf("\n Enter the employee Salery:\n");
	  scanf("%f",&e[i].salery);
	  printf("Enter the employee designation:\n");
	  scanf("%s",&e[i].design);

   }
   struct employee temp;
   
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
      	if(e[i].id>e[j].id)
      	{
      		temp=e[i];
      		e[i]=e[j];
      		e[j]=temp;
      	}
      }
    
    }
      	printf("****Employee Details in Ascending Order With the ID****\n");
   for(i=0;i<n;i++)
   {
   	
	 printf("\n Employee Name: %s\n",e[i].name);
	 printf("\n Employee ID: %d",e[i].id);
	 printf("\nEmployee Salery: %f",e[i].salery);
	  printf("\n Employee designation: %f",e[i].design);
		printf("\n");
   }
return 0;
}
