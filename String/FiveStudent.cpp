//Students Record in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
    char name[10],temp[10];
    for(i=0;i<10;i++)
{
   printf("Enter your full name:\n");
   scanf("%s",name[i]);
}

for(i=0;i<10;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(strcmp(name[i],name[j])>0)
		{
			temp=name[i];
			name[i]=name[j];
			name[j]=temp;
		}
	}
}
 printf("Students Name in Alphabetical Order:\n");
    for(i=0;i<10;i++)  
   printf("%s\n",name[i]);


return 0;
}
