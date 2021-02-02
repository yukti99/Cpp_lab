#include <stdio.h>
int main()
{
	/* Q80 Pattern : 1234
	                 123
	                 12
	                 1   */
	                 
	int i,j,k;
	for(i=4;i>=1;i--)
	{
	  for(j=1;j<=i;j++)
	  {
	  	printf("%d",j);	  	
	  }
	  for(k=0;k<=i;k++)
	  {
	  	printf(" ");
	  }
	  printf("\n");
	}
	
	return 0;
}
