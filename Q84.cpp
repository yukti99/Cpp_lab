#include <stdio.h>
int main()
{
/* Q84 Pattern :i.e.
if input is 7
   *
  ***
 *****
*******
 *****
  ***
   *
& if input is 8
 
   *
  ***
 *****
*******
*******
 *****
  ***
   *
   
*/ 
int i,j,k,n,a;
printf("Enter your input = ");
scanf("%d",&n);

if (n%2!=0) // odd input
{
   a= n/2 + 1;
   for(i=1;i<=a;i++)
   {
   	 for(j=a;j>=i;j--)
   	    printf(" ");
   	 for( k=1 ; k<=(i*2)-1 ; k++)
   	    printf("*");
   	 printf("\n");
   }
   for(i=n-a; i>=1 ;i--)
   {
   	 for(j= n-a+1 ;j>=i;j--)
		printf(" ");
	 for(k=(i*2)-1 ;k>=1 ; k--)
	    printf("*");
	 printf("\n"); 
   } 		
} 
else  // even input
{
   a= n/2 ;
   for(i=1;i<=a;i++)
   {
   	 for(j=a;j>=i;j--)
   	    printf(" ");
   	 for( k=1 ; k<=(i*2)-1 ; k++)
   	    printf("*");
   	 printf("\n");
   }
   for(i=n-a; i>=1 ;i--)
   {
   	 for(j=n-a ;j>=i;j--)
		printf(" ");
	 for(k=(i*2)-1 ;k>=1 ; k--)
	    printf("*");
	 printf("\n"); 
   } 		
	
}
return 0;
}

