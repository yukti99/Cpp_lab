#include <stdio.h>
int main()
{
/* Q102  Pattern
   1
  2 3
 4 5 6
7 8 9 10
    ...
*/
int i,j,k=1,l;
int n;
printf("Enter the number of lines in pattern = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=n;j>i;j--)
      printf(" ");
    for(l=1;l<=i;l++)
    {
      printf("%d ",k);
      k++;
    }
    printf("\n");      
}
return 0;	
}
