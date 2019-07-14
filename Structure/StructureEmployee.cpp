//Employee details in alphabhetical order
#include<stdio.h>
#include<string.h>
struct employee{
	char name[20],add[20];
	float salery;
}e[5];
int main()
{
	int i,j;
	printf("Entre the details of the employee:\n");
	for(i=0;i<5;i++)
	{
	printf("\nEnter the name of the employee\n");
	scanf("%s",e[i].name);
	printf("Entre the address of the employee:\n");
	scanf("%s",e[i].add);
	printf("Enter the salery of the employee:\n");
	scanf("%f",&e[i].salery);
	printf("\n");
	}
	struct employee temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		if(strcmp(e[i].name,e[j].name)>0)
		{
			temp=e[i];
			e[i]=e[j];
			e[j]=temp;
		}
		}
	}
		for(i=0;i<5;i++)
		{
			printf("Name: %s  Address: %s  Salery: %f",e[i].name,e[i].add,e[i].salery);
			printf("\n\n");
					
		}
	return 0;
}
