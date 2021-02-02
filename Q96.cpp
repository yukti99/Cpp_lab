#include <stdio.h>
int main()
{
/* Q96 Pattern using while loop

i.e. if input is 5
  1
 234
56789
 012
  3
& if input is 6
  1
 234
56789
01234
 567
  8

*/
int i,j,k,l=1,a,n;
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
			if (l==10)
			  l=0;
			printf("%d",l);
			l++;
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
	        if (l==10)
			  l=0;
			printf("%d",l);
			l++;
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
			if (l==10)
			  l=0;
			printf("%d",l);
			l++;
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
	        if (l==10)
			  l=0;
			printf("%d",l);
			l++;
	        k--;
	    }
	    i--;
	    printf("\n");
	} 
  
}
return 0;	
}
