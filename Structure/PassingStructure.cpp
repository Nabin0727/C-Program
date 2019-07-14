//Passing Structure
#include<stdio.h>
void display(struct employee e);
struct employee{
	char name[20];
	int id;
	float salery;
} s;
int main()
{
	printf("\nInput Record\n");
	printf("Enter name of the employee:\n");
	scanf("%s",s.name);
	printf("Entre the ID and the Salery of the employee:\n");
	scanf("%d%f",&s.id,&s.salery);
	display(s);
	return 0;
}
void display(struct employee e)
{
	printf("\n Name: %s\n ID: %d \n Salery: %f\n",e.name,e.id,e.salery);
}



