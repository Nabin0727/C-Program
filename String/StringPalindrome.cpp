/*Program to read a string and check for palindrome*/
 #include <stdio.h>
 #include<string.h>
 int main() {
  char string[50]; 
  int len, i, palindrome=1;
   printf("Enter string:\t"); 
   gets(string);
    len=strlen(string);
	 for(i=0;i<(len/2);i++) //odd length=>lower bound=>truncate 
	 {
	  if(string[i]!=string[len-i-1]) 
	 palindrome=0; 
	 } 
	 if(palindrome==0)
	  printf("\nThe input string is not palindrome.");
else
printf("\nThe input string is palindrome.");
return 0;
 }
