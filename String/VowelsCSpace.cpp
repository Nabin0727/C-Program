//Counting the vowels and spaces, comma, colon,semicolon
#include<stdio.h>
int main()
{
	int i=0,v=0,c=0,com=0,sem=0,sap=0; 
	char str[100];
	
	printf("Entre any string:");
	gets(str);
	//scanf("%s",string);
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		v++;
		else if(str[i]==';')
		sem++;
		else if(str[i]==' ')
		sap++;
		else if(str[i]==',')
		com++;
		else
		c++;
		i++;		
		
	}
	printf("The number of volwel is %d, constnat is %d, comma is %d, Semicolon is %d and spaces is %d",v,c,com,sem,sap);

	return 0;
}
