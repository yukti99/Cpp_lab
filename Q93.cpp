#include <stdio.h>
int main()
{
/* Q93 Pattern:

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
int i,j,k,a,n;
printf("Enter the number of rows = ");
scanf("%d",n);
if (n%2==0)
{
	a = n/2 ;
	i=1;
	
	while(i<=a)
	{   j=a;
		while(j>i)
		{
			printf(" ");
			j--;
		}
		k=1;
		while(k<=i)
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
	i=1;
	while(i<=n-a)
	{
	    j=1;
	    while(j<i)
	    {
	        printf(" ");
	        j++;
	    }
	    k=n-a;
	    while(k>=i)
	    {
	        printf("*");
	        k--;
	    }
	    i++;
	    printf("\n");
	}
}
else
{
  a = n/2 +1 ;
  i=1;
	
  while(i<=a)
	{   j=a;
	    while(j>i)
		{
			printf(" ");
			j--;
		}
		k=1;
		while(k<=i)
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
	i=1;
	while(i<=n-a)
	{
	    j=1;
	    while(j<=i)
	    {
	        printf(" ");
	        j++;
	    }
	    k=n-a;
	    while(k>=i)
	    {
	        printf("*");
	        k--;
	    }
	    i++;
	    printf("\n");
	}  
}
return 0;	
}
