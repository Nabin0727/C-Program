//Students Details
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct students{
		int id;
		long int mobile;
	char name[20],add[20];
}s[10];
int main()
{
	int i;
	printf("\nEntre the details of the students:\n");
	for(i=0;i<10;i++)
	{
	printf("\nEntre the details of the %d students:\n",i+1);
	printf("\nEntre the name:");
	scanf("%s", s[i].name);
	printf("\nEntre the address:");
	scanf("%s",s[i].add);
	printf("\nEntre roll no:");
	scanf("%d",&s[i].id); 
		printf("\nEntre mobile no:");
	scanf("%ld",&s[i].mobile);  	
	printf("\n");
	
}	
for(i=0;i<10;i++)
{
printf("Name: %s\n Address: %s\n Id: %d\n Mobile: %ld\n",s[i].name,s[i].add,s[i].id,s[i].mobile);	
	printf("\n");
}
return 0;
}
