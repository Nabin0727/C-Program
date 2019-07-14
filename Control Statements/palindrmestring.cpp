#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],rev[20],strr[20];
	printf("Entre a string to check");
	gets(str);
	strcmp(strr,str);
	strrev(str);
	//strcmp(rev,str);
	if(strcmp(strr,str)==0)
		printf("The strng is palindrome");
	else 
	printf("The string is not palindrome.");
	return 0;
}
