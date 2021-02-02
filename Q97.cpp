#include <stdio.h>
int main()
{
/* Q97 Pattern using while loop
0
10
010
1010
*/
int i=1,j,k,n;
printf("Enter the number of rows = ");
scanf("%d",n);
while(i<=n)
{ if (i%2!=0)
    k=0;
  else
    k=1; 
  j=1;
  while(j<=i)
  {
	printf("%d",k);  
	if (k==1)
  	  k=0;
  	else if (k==0)
  	  k=1;
  	 j++;
  }
  i++;
  printf("\n");	
}
return 0;	
}
