#include <stdio.h>
#include <math.h>
int getdigit(int x) ;
int main()
{ 
  // Q158. To convert a string like "124" to an integer 124.
   printf("This Program converts a string like '124' to an integer 124.\n");
   char s[100];
   int l, n=0 , i ;
   printf("Enter string : ");
   gets(s);   
   for(l=0;s[l]!='\0'; ++l)
   { }
   int a ;
   a = l-1;
   for(i=0 ; i < l  ; i++)
   { 
    
     n += pow(10,a) * (getdigit(s[i])) ;
     a--;
   }
   printf("Integer = %d\n",n);
   return 0;
}   
int getdigit(int x) 
{
    int i ;
    i = x - 48 ;
    return (i) ;
}
   
