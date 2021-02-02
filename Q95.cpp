#include <stdio.h>
int main()
{
/* Q95 Pattern:

12345
6789
012
34
5
*/
int i,j,k=1,a,n;
n=5;
i=n;
while(i>=1)
{j=1;
 while(j<=i) 
 {
   if (k==10)
     k=0;
   printf("%d",k);
   k++;
   j++;
 }
 printf("\n");
 i--;
}
return 0;	
}
