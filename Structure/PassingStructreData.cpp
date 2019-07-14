//Passing structure data
#include<stdio.h>
void display(char[], int, float);
int main()
{
	struct employee
	{
		char name[20];
		int id;
		float salery;
	}e;
	printf("____Input Records___\n");
	printf("\nEnter the name of Employee:");
	scanf("%s",e.name);
	printf("\nEnter the ID and salery of the employee:");
	scanf("%d%f",&e.id,&e.salery);
	display(e.name,e.id,e.salery);
	return 0;
	}
	void display( char name[],int id, float salery)
	{
		printf("\n****Record Of Employee****\n");
		printf(" Name: %s\n ID: %d\n Salery: %f\n",name,id,salery);
	}
