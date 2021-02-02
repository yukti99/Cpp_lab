#include <stdio.h>
int main()
{
	/* Q87 Pattern
	 0
     10
     010
     1010
    */
    int i,j,n=4,k=0,a;
    for(i=1;i<=n;i++)
    {
        if (i%2!=0)
          k=0;
        else
          k=1;
          
       	for(j=1;j<=i;j++)
    	{
    		printf("%d",k);
    		if(k==0)
    	      k=1;
    	    else if (k==1)
    	      k=0;
		}
		
		printf("\n");
	
	}	
	return 0;	
}
