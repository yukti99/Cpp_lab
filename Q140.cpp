#include <stdio.h>
int main()
{
	// Q140. To Compares two strings without regard to case 
	
   char str1[40], str2[40];
   int i=0 ;
   printf("Enter string-1 : ");
   scanf("%s",&str1) ;
   printf("Enter string-2 : ");
   scanf("%s",&str2) ;  
   while (str1[i] == str2[i] && str1[i] != '\0' )
   {
   	 i++;
   }
   if (str1[i] > str2[i])
      printf("str1 > str2");
   else if (str1[i] < str2[i])
      printf("str1 < str2");
   else
      printf("str1 = str2");
   return 0;	
}
