#include <stdio.h>
int main()
{
	// Q149. To convert a string to lowercase.
	// 97-122 for a,b..
	// 65-90 for A,B...
   char str[100],l[100] ;
   int i=0 , j=0;  
   printf("Enter string : ");
   gets(str);
   for(i=0 ; str[i] != '\0'; i++)
   {
   	 if (str[i] <=90 && str[i] >=65)
   	     l[j] = str[i] + 32 ;
   	 else
   	     l[j] = str[i] ;
   	 j++;		
   }
   printf("Lower case string = %s",l);  	  
   return 0;	
}
