#include <stdio.h>
int main()
{
/* Q93 Pattern using while loop
 
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
int i,j,k,a,n;
printf("Enter the number of rows = ");
scanf("%d",n);
if (n%2!=0)
{
	a = n/2 + 1 ;
	i=1;
	while(i<=a)
	{   j=a;
	    while(j>i)
		{
			printf(" ");
			j--;
		}
		k=1;
		while(k<=(i*2-1))
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
	i=n-a;
	while(i>=1)
	{
	    j=n-a;
	    while(j>=i)
	    {
	        printf(" ");
	        j--;
	    }
	    k=(i*2) - 1;
	    while(k>=1)
	    {
	        printf("*");
	        k--;
	    }
	    i--;
	    printf("\n");
	} 
}
else
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
		while(k<=(i*2-1))
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
  i=n-a;
  while(i>=1)
	{
	    j=n-a;
	    while(j>i)
	    {
	        printf(" ");
	        j--;
	    }
	    k=(i*2) - 1;
	    while(k>=1)
	    {
	        printf("*");
	        k--;
	    }
	    i--;
	    printf("\n");
	} 

}
return 0;	
}
