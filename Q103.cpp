#include <stdio.h>
long fact(int);
int main()
{
/* Q103  Pascal's Triangle
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/   
int i,j,k,x=1,y;
printf("Enter the number of lines in pattern = ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=n;j>i;j--)
      printf(" ");
    for(k=0;k<=i;k++)
      printf("%ld ",fact(i)/(fact(k)*fact(i-k)));
    printf("\n");      
}
long fact(int n)
{
   long f=1;
   int i;
   for(i=1;i<=n;i++)
     f*=i;
   return f;
}

return 0;	
}

