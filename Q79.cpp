#include <stdio.h>
int main()
{
	// Q79 Pattern
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=4;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");		
	}
	return 0;
}
