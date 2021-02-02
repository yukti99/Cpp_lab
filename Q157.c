#include <stdio.h>
void main()
{ 
  // Q157. To extract part of the given string from the specified position.
   printf("This Program extracts part of the given string from the specified position.\n");
   char s1[100],s2[100];
   int l=0,p,n,i,j=0,a;
   printf("Enter string : ");
   gets(s1);
   printf("Enter position = ") ;
   scanf("%d",&p);
   printf("Enter no of characters to be extracted = ") ;
   scanf("%d",&n); 
   printf("The extracted string is - ");
   while(s1[l]!='\0')
   l++;      
   if (n==0)
   {
     for(i = p-1 ; i<l ; i++)
     {
       printf("%c",s1[i]);
     }       
     return ;     
   }
   else
   {
     for(i = p-1 ; i < p+n && j < n ; i++)
     { 
       s2[j] = s1[i] ;
       j++ ;
     }
   }
   s2[j] = '\0' ;
   puts(s2);   
}   
   
