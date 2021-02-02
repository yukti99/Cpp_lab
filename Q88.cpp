#include <stdio.h>
int main()
{
/* Q88 Pattern using while loop
	*
    **
    ***
    ****
*/
   int i=1,j=1,n=4;
   while (i<=n)
   {
       while(j<=i)
       {
           printf("*");
           j++;
       }
       j=1;
       printf("\n");
       i++;
   }
	return 0;	
}
