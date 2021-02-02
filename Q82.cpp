#include <stdio.h>
int main()
{
/* Q82 Pattern :
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
int i,j,k,n,a;
printf("Enter your input = ");
scanf("%d",&n);
if (n%2!=0) // for odd input
{
	a=n/2 +1 ;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		  printf("*");
		printf("\n");
	}
	for(k=1;k<=n-a;k++)
	{
		for(j=n-a;j>=k;j--)
		  printf("*");
		printf("\n");
	}
}
else // for even input
{
	a=n/2;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		  printf("*");
		printf("\n");
	}
	for(k=1;k<=a;k++)
	{
		for(j=a;j>=k;j--)
		  printf("*");
		printf("\n");
	}
}
	 return 0;
}
