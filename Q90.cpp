#include <stdio.h>
int main()
{
/* Q90 Pattern using while loop
	****
    ***
    **
    *
*/
   int i,j,k,n=4;
   i=n;
   while (i>=1)
   {
       j=1;
       while(j<=i)       
       {
           printf("*");
           j++;
       }
       printf("\n");
       i--;
   }
	return 0;	
}
