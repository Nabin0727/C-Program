//Passing Array Structure To the Function
#include<stdio.h>
void display(struct employee e []);
struct employee{
	char name[20];
	int id;
	float salery;
} s[5];
int main()
{
	int i;
	float temp;
	printf("\nInput Record\n");
	for(i=0;i<5;i++)
	{
		printf("Enter name of the employee:\n");
	scanf("%s",s[i].name);
	
	printf("Entre the ID:\n");
	scanf("%d",&s[i].id);	
	printf("Enter the Salery of the employee:\n");
	scanf("%f",&temp);
	s[i].salery=temp;
	}
	display(s);
	return 0;
}
void display(struct employee e[])
{
	int i;
	for(i=0;i<5;i++)
	printf("\n Name: %s\n ID: %d \n Salery: %f\n",e[i].name,e[i].id,e[i].salery);
	printf("\n");
}



