//Structure example
#include<stdio.h>
#include<string.h>
struct students 
{
	char college[20];
	char address[20];
	char name[20];
	long int mobile;
} s[5];
int main()
{
	int i;
	int temp;
	printf("___Students Details__:");
	for(i=0;i<5;i++)
	{
	 printf("\n Enter the name of the college:");
	  scanf("%s",s[i].college);
	 printf("\n Enter the address:");
	  scanf("%s",s[i].address);
	 printf("\n Enter your name:");
	 scanf("%s",s[i].name);
			printf("\n");
   }
   struct students temp{
   	for(i=0;i<)
   };
   
   
   for(i=0;i<5;i++)
   {
   		printf("****Studnets Details****\n");
	printf("College Name:%s\n",s[i].college);
	printf("Address:%s\n",s[i].address);
		printf("Name:%s\n",s[i].name);
		printf("\n");
   }
return 0;
}
