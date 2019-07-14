//Program using structure data and print in ascending order
#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct students{
		char name[10];
		int roll;
		float marks[5];
	}s[2],temp;
	
	int i,j,total[5],sum=0;
	printf("Enter the details of the students:\n");
	for(int i=0;i<2;i++)
	{
		printf("Students Name:\n");
		scanf("%s",s[i].name);
		printf("Students Roll Number:\n");
		scanf("%d",&s[i].roll);
		printf("Students Of Marks Three Subjects:\n");
		for(j=0;j<3;j++)
		scanf("%f",&s[i].marks[j]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+s[i].marks[j];
			
		}
		total[i]=sum;
		sum=0;
	}
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
			{
				if(total[i]>total[j])
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;					
				}
			}
	}
	
	   for(i=0;i<2;i++)
   {
   	printf("****Studnets Details****\n");
	printf("Name: %s\n",s[i].name);
	printf("Roll: %d\n",s[i].roll);
		printf("Total Marks: %d\n",total[i]);
		printf("\n");
   }
   return 0;
}
