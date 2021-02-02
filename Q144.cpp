#include <stdio.h>
int main()
{
	// Q144. To set all characters of string to a given character
   char str[40],c;
   int i; ;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   printf("Enter the character you want all the elements of string replaced with ? ");
   scanf("%s",&c);
   for(i=0 ; str[i] != '\0'; i++)
   {
   	 str[i] = c ;
   }
   printf("The altered string is - %s",str);
   	  
    return 0;	
}
	
   
  
