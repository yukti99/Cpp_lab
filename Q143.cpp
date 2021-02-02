#include <stdio.h>
int main()
{
	// Q143. To find the first occurrence of a given sub string in another string	
   char str[40],s[40] ;
   int i=0,j=0 ;   
   printf("Enter string : ");
   scanf("%s",&str) ; 
   printf("Enter the substring you want to find ? ");
   scanf("%s",&s);
   // Finding the length of the substring & string
   int l1=0,l2=0;
   for(i=0 ; s[i] != '\0' ; i++)
      l1++;
   for(i=0 ; str[i] != '\0' ; i++)
      l2++;
   int f=0 ; 
   for(i=0 ; i<l2 ; i++)
    {
		if (l1==f)
	       break;
		if (str[i] == s[j])
	 	{
	 		f++ ;
	 		j++;	
		}
		
	} 
	if (f==l1)
	  	printf("First occurance of %s is at position - %d of string - %s",s,i-l1+1,str);
    else
	    printf("The entered substring - %s is NOT present in string - %s",s,str);	 	  
    return 0;	
}
	
   
  
