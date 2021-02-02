#include <stdio.h>
int main()
{
	//pattern
/*	    *****
         ****
          ***
           **
            *
            

	*/
	int i,j,k;
	int n=5;	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-1;j--)
		 printf(" ");
		for(k=n;k>=i;k--)
		 printf("*");
		printf("\n");
	}
	return 0;
}
