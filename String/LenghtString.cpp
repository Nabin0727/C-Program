//Lengths of string
#include<stdio.h>
#include<string.h>
int main()
{
int length;
	char s1[10];
	printf("Enter any word:");
	gets(s1);
 length=strlen(s1);
 printf("%d is the lenght of given string ",length);
	return 0;
}
