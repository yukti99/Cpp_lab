#include <stdio.h>
int main()
{
	// Q141. To finds first occurrence of a given character in a string.	
   char str[40],c ;
   int i=0 ;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   printf("Enter the character you want to find ? ");
   scanf("%s",&c);
   while(str[i] != '\0')
   { 
	 if (str[i] == c)
   	{  
   		printf("%c occurs at position - %d of string",c,i+1);
   	    break ;
	} 
	i++ ;  	   
   }   
   return 0;	
}
	
   
  
