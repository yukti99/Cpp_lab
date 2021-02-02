#include <stdio.h>
int main()
{
	//pattern
/*	*******
	 *****
	  ***
	   *
	*/
	int i,j,k;
	int n=4;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		   printf(" ");
		for(k=1;k<=(i*2-1);k++)
		   printf("*");
		printf("\n");
	}
	
	return 0;
}
