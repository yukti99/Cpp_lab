#include <stdio.h>
int main()
{
/* Q83 Pattern :i.e.
if input is 7
   *
  **
 *** 
****
 ***
  **
   *
& if input is 8
   *
  **
 ***
****
****
 ***
  **
   *

*/ 
int i,j,k,n,a;
printf("Enter your input = ");
scanf("%d",&n);
if (n%2!=0) // odd input
{
	a= n/2 +1 ;
	for(i=1;i<=a;i++)
	{
		for(k=a;k>=i;k--)
		  printf(" ");
		for(j=1;j<=i;j++)
		  printf("*");
		printf("\n");
	}
	for(i=1;i<=n-a;i++)
	{
		for(k=0;k<=i;k++)
		  printf(" ");
		for(j=n-a;j>=i;j--)
		  printf("*");
		printf("\n");
	}
}
else  // even input
{
    a=n/2 ;
	for(i=1;i<=a;i++)
	{
	  for(k=a;k>=i;k--)
	    printf(" ");
	  for(j=1;j<=i;j++)
	    printf("*");
	  printf("\n");
	}
	for(i=1;i<=a;i++)
	{
	  for(k=1;k<=i;k++)
	  	printf(" ");
	  for(j=a;j>=i;j--)
	  	printf("*");
	  printf("\n");	  	
	}	
}
return 0;
}
