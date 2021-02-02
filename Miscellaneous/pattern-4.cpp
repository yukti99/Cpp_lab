#include <stdio.h>
int main()
{
	/* Pattern :    1
	               12
	              123
	             1234  */
    int n,i,j,k;
    printf("Enter the no of rows you want = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(k=n-1;k>=i;k--) // for spaces
    	  printf(" ");
    	for(j=1;j<=i;j++) // for columns
    	  printf("%d",j);
    	printf("\n");
	}
    return 0;
}
