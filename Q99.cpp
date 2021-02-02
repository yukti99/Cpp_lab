#include <stdio.h>
int main()
{
/* Q99 Pattern 

*******
 *****
  ***
   *
  ***
 *****
*******


*/
int i,j,k,n;
printf("Enter the no of rows in hour glass pattern(odd) = ");
scanf("%d",&n);
int a = n/2 + 1 ;
for(i=a;i>=1;i--)
{
    for(j=a;j>i;j--)
      printf(" ");
    for(k=(i*2)-1;k>=1;k--)
      printf("*");
    printf("\n");
}
for(i=2;i<=a;i++)
{
    for(j=n-a;j>=i;j--)
      printf(" ");
    for(k=1;k<=(i*2)-1;k++)
      printf("*");
    printf("\n");
}

return 0;	
}
