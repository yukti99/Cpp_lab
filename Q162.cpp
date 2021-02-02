#include <stdio.h>
int main()
{ 
  // Q162. to delete all vowels from a sentence. 
  //Assume that the sentence is not more than 80 characters long.
  char s[80];
  int i,l;
  printf("Enter any string : ");
  gets(s);
  for(l=0 ; s[l]!='\0' ; l++)
  {};
  for(i=0 ; i<l ; i++)
  {
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      {      }
      else
      printf("%c",s[i]);  
  }
  return 0;
}
