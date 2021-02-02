#include <stdio.h>
int main()
{
	/* Pattern :    *
	               ***
	              *****
				 *******
				  *****
				   ***
				    *      
    */
    //odd rows using only 3 loops not more
    int n,i,j,k;
    printf("Enter the no of rows you want = ");
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
    	for(k=n-1;k>=i;k--)  //for spaces
    	  printf(" ");
    	for(j=1;j<= i*2 -1 ;j++)  // for columns
    	  printf("*");
    	printf("\n");
	}
    
	return 0;
}
