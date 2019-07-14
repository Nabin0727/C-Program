    #include <stdio.h>
    #include <string.h>
     
    int vowel(char);
     
    int main()
    {
      char s[100], s1[100];
      int i, d = 0;
     
      printf("Enter a string\n");
      gets(s);
     
      for(i = 0; s[i] != '\0'; i++) {
        if(vowel(s[i]) == 0) {       // If not a vowel
          s1[d] = s[i];
          d++;
        }
      }
     
      s1[d] = '\0';
     
      strcpy(s, s1);  // We are changing initial string. This is optional.
     
      printf("String after deleting vowels: %s\n", s);
     
      return 0;
    }
     
    int vowel(char ch)
    {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
          return 1;
        else
          return 0;
    }
