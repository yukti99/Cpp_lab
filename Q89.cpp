#include <stdio.h>
int main()
{
/* Q89 Pattern using while loop
	 *
    **
   ***
  ****
*/
   int i=1,j,k,n=4;
   while (i<=n)
   {
       j=1;
       k=n;
       while(k>=i)
       {
           printf(" ");
           k--;
       }
       while(j<=i)
       {
           printf("*");
           j++;
       }
       printf("\n");
       i++;
   }
	return 0;	
}
