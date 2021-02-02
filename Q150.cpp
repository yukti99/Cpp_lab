#include <stdio.h>
int main()
{
	// Q150. To convert a string to uppercase.
	// 97-122 for a,b..
	// 65-90 for A,B...
   char str[100],l[100] ;
   int i=0 , j=0;  
   printf("Enter string : ");
   gets(str);
   for(i=0 ; str[i] != '\0'; i++)
   {
   	 if (str[i] <=122 && str[i] >=97)
   	     l[j] = str[i] - 32 ;
   	 else
   	     l[j] = str[i] ;
   	 j++;
   }
   printf("Upper case string = %s",l);  	  
   return 0;	
}
