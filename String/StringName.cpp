//Simple String Example
#include<stdio.h>
int main()
{
char name[20],add[20];
int roll[10],level[10],i;
printf("Enter your full name:\n");
for(i=0;i<5;i++)
{
	scanf("%s",name[i]);
}

printf("Enter your full address:\n");
for(i=0;i<5;i++)
{
	scanf("%s",add[i]);
}

printf("Enter your roll:no and level:\n");
for(i=0;i<5;i++)
{
	scanf("%d%d",&roll[i],&level[i]);
}

printf("Your Details:\n");
for(i=0;i<5;i++)
{
	printf("Name: %s\n",name[i]);
	printf("Address:%s\n",add[i]);
printf("Roll:no: %d\n",roll[i]);
printf("Level: %d\n",level[i]);
}


return 0;
}
