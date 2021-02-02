#include <stdio.h>
int main()
{
	// Q142. To find last occurrence of a given character in a string.	
   char str[40],c ;
   int i=0,j ;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   printf("Enter the character you want to find ? ");
   scanf("%s",&c);
   while(1)
   {
   	  if (str[i] == '\0')
   	  {
	    j = i ;
   	  	break ;
	  }
	  i++;
   }
   while(j > 0)
   { 
	 if (str[j] == c)
   	{  
	    printf("Last occurance of %c is at position - %d of string",c,j+1);
   	    break ;
	} 
	j-- ;  	   
   }   
   return 0;	
}
	
   
  
