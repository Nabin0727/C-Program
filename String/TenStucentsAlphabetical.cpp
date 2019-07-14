//Program to print names in alphabetical order
#include <stdio.h>
#include <string.h>
int main()
{
     char name[10][8], temp[8];
      int i, j;
	  printf("Enter Ten names:\n");
	   for (i = 0; i < 5; i++) 
        scanf("%s", name[i]);
        for (i=0;i<5;i++)
        {
            for (j=i+1;j<5; j++)
            {
                if (strcmp(name[i],name[j]) > 0) 
                {
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }

            }

        }
        printf("Names in Alphabetical Order\n");
        for (i=0;i<5;i++) 

        {
            printf("%s\n",name[i]);

        }
        return 0;

}
