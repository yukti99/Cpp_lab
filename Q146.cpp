#include <stdio.h>
int main()
{
	// Q146. To reverse a string   
   char str[40],r[40];
   int i,l=0;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   for(i=0 ; str[i] != '\0'; i++)
      l++;
   for(i=0 ; i < l ; i++)
   {
   	 r[l-i-1] = str[i]  ;
   }
   printf("The Reversed string = %s",r);  	  
   return 0;	
}
	
   
  
