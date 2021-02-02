#include <stdio.h>
int main()
{ 
  // Q156. To compare first n characters of two strings.
   printf("This Program compares first n characters of two strings\n");
   char s1[100],s2[100] ;
   int l1,l2,n,i,j=0;
   printf("Enter string-1 : ");
   gets(s1);
   printf("Enter string-2 : ");
   gets(s2);
   printf("Enter n = ") ;
   scanf("%d",&n);
   for(l1=0;s1[l1]!='\0';++l1)
   for(l2=0;s2[l2]!='\0';++l2)
   for(i=0 ; i < n ; i++)
   { 
     if (s1[i] > s2[i])
     {
        j=1;
        printf("String-1 > String-2");
        return 0 ;
     }
     else if (s1[i] < s2[i])
     {
        j=1;
        printf("String-1 < String-2");
        return 0 ;
     }
   }
   if (j==0 && l1==l2)
     printf("String-1 = String-2");
   return 0;
}   
   
