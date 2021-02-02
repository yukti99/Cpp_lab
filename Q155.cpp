#include <stdio.h>
int main()
{   
    //Q155. To compare two strings character by character.
    char s1[100] , s2[100] , i = 0 , j ,n ;
    printf("This compares two strings character by character.\n");
    printf("Enter string-1 : ");
    gets(s1);
    printf("Enter string-1 : ");
    gets(s2);
    // calculate the length of string s1
    // and store it in i
    printf("After comparing : \n");
    int l1=0,l2=0;
    while ( s1[l1] != '\0' )
      l1++ ;
    while ( s2[l2] != '\0' )
      l2++ ;    
    int f=0;
    for(i=0,j=0 ; (s1[i]!='\0' ||  s2[j]!='\0') ;i++,j++)
    {
      if (s1[i] > s2[j])
      {      	
		  f=1;
		  printf("String-1 > String-2");	
		  break;		  
	  }
	  else if (s1[i] < s2[j])
	  {      	
		  f=2;
		  printf("string-2 > string-1\n");
		  break;
	  }
	} 
	if (f==0 && l1==l2 )
	  printf("Both the strings are equal\n"); 
	  
    return 0;
}
   
   
