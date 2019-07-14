//Atructure choice 
#include<stdio.h>
#include<stdlib.h>
int main()
{
		struct student {
	char name[20];
	char address[20];
	int id;
	char level[20];
	char gender[20];
};
struct student s[10];
	int choice,i;
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:			
		for(i=0;i<5;i++)
		{
	printf("Enter the name of the students:");
	scanf("%s",s[i].name);
	printf("Enter the address of the students:");
	scanf("%s",s[i].address);
	printf("Enter the ID of the students:");
	scanf("%d",&s[i].id);
	printf("Enter the level of the students:");
	scanf("%s",s[i].level);
	printf("Enter the gender of the students:");
	scanf("%s",s[i].gender);
}
	for(i=0;i<10;i++)
	{
		
			printf("****Details****");
	printf("\n_______________\n");
	printf(" Name: %s\n Address: %s\n Id: %d\n Level: %s\n Gender: %c\n",s[i].name,s[i].address,s[i].id,s[i].level,s[i].gender);
}
break;
case 2:
	for(i=0;i<5;i++)
	{
		if(s[i].gender=="Male")
		printf("Name: %s\n",s[i].name);
		printf("\n");
	}
	break;
	case 3:
		exit(0);
		break;
		default:
			printf("Your choice is Incorrect, Try Again");
	}

	return 0;
}
