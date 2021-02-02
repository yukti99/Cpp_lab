#include <stdio.h>
int main()
{
	// Q148. To find length of a string.
   char str[100];
   int i=0, l=0 ;   
   printf("Enter string : ");
   gets(str);
   while(str[i] != '\0')
   {
   	l++;
   	i++;
   }
   printf("The length of string is %d",l);  	  
   return 0;	
}
	
