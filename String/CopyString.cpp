//Copy string
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char s1[10],s2[10];
	printf("Enter any word:");
	gets(s1);
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
/*	while(s2[i]!='\0')
	{
		printf("%s",s2[i]);
		i++;
		
	}*/
//	puts(s2);
	//printf("%s",s2);
	
	strcpy(s2,s1);
	puts(s2);
	return 0;
}
