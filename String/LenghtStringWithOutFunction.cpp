//Length of string
#include<stdio.h>
int main()
{
	int i=0,length=0;
	char string[100];
	printf("Entre any string:");
	gets(string);
	while(string[i]!='\0')
	{
		length++;
		i++;
	}
	printf("The lenght of string is: %d",length);
	return 0;
}
