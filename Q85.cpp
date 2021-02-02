#include <stdio.h>
int main()
{
	// Q85 Pattern:
	/*
	12345
	6789
	012
	34
	5    */
	int i,j,k=1,a=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=a;j++)
		{
		  if (k==10)
		     k=0;
		  printf("%d",k);
		  k++;		  	
		}
		a--;
		printf("\n");
		  
	}
	return 0;
	
	
}
