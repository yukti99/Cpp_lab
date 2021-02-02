#include <stdio.h>
int main()
{ 
  /* Q159. To replace two or more consecutive blanks in a string by a single blank. For example, if the input is 
     Grim   return  to     the planet         of      apes!!
     the output:
     Grim return to the planet of apes!!
  */
   printf("This Program replaces two or more consecutive blanks in a string by a single blank.\n");
   char s[100];
   int l=0,i,k=0 ;
   printf("Enter any string : ");
   gets(s);
   for(l=0;s[l]!='\0'; ++l)
   { }
   for(i=0 ; i <= l  ; i++)
   { 
     if (s[i] == ' '  && s[i+1] == ' ' )
     {    	
	 }
	 else
	 {
	 	s[k] = s[i] ;
	 	k++;
	 }
   }
   printf("Required string  : ");
   puts(s) ;
   return 0;
}   

