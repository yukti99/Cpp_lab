#include <stdio.h>
int main()
{
	// Q145. To set first n characters of a string to a given character.
	printf("This program sets first n characters of a string to a given character.\n");
   char str[40],c;
   int i,n,l=0;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   printf("Enter n = ");
   scanf("%d",&n);
   printf("Enter the character you want all the elements of string replaced with ? ");
   scanf("%s",&c);
   for(i=0 ; str[i] != '\0'; i++)
      l++;
   for(i=0 ; i < n ; i++)
   {
   	 str[i] = c ;
   }
   printf("The altered string is - %s",str);   	  
   return 0;	
}
	
   
  
