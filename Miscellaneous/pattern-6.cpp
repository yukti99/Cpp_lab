#include <stdio.h>
int main()
{
	/* Pattern :  *******   
	               *****
	                ***
	                 *
	              
	*/
    int n,i,j,k;
    printf("Enter the no of rows you want = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	for(k=n-1;k>=i;k--)  // for spaces
    	  printf(" ");
    	// for columns
    	//for(j=i*2-1;j>=1 ;j--) or
    	for(j=1;j<=i*2-1;j++) 
	      printf("*");
    	printf("\n");
	}
    
	return 0;
}
