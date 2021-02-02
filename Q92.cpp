#include <stdio.h>
int main()
{
/* Q92 Pattern using while loop
	i.e. if input is 7
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
   int i=1,j,n,a;
   printf("Enter the rows you want to print = ");
   scanf("%d",&n);
   if (n%2!=0)  
     a=n/2 + 1 ;
   else
      a=n/2;
   while(i<=a)
   { j=1;
		while(j<=i)
		{
		    printf("*");
		    j++;
		}
		i++;
		printf("\n");
   }
   i=n-a;
    while(i>=1)
    {
          j=1;
          while(j<=i)
          {
              printf("*");
              j++;
          }
          i--;
          printf("\n");
     }
	return 0;	
}
