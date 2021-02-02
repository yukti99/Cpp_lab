
#include <stdio.h>
int vowel(char s);
int main()
{ 
  /* Q164. To count the number of occurrences of any two vowels in succession in a line of text.
     For eg, in the sentence "Pleases read this application and give me gratuity' 
     such occurrences are ea, ea, ui..*/
  char s[100] ;
  int l,i,count;
  printf("Enter any sentence : ");
  gets(s);
  for(l=0 ; s[l]!='\0' ; l++)
  {} ;
  for(i=0 ; i<l ; i++)
  {
      if (vowel(s[i]) && vowel(s[i+1]))
      {
          count++;
          printf("%c%c",s[i],s[i+1]);
      }
      printf(" , ");
         
  }
  printf("No of occurences of vowels in given sentence - %d ",count);
  return 0;
}
int vowel(char c)
{
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return 1;
  else
    return 0;
}
