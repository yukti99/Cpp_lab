#include <stdio.h>
int main()
{
	// Q78 Pattern
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf("*");
		}
		for(k=0;k<=i;k++)
		{
			printf(" ");
		}
		printf("\n");
		
	}
	return 0;
}
