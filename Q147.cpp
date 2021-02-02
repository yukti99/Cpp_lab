#include <stdio.h>
int main()
{
	// Q147. To count number of words in a string.
   char str[100];
   int i=0, count=1 ;   
   printf("Enter string : ");
   gets(str);
   while(str[i] != '\0')
   {
   	if (str[i]==' '|| str[i]=='\n'|| str[i] == '\t')
   	   count++ ;
   	i++ ;
   }
   printf("The number of words in the string = %d",count);  	  
   return 0;	
}
	
