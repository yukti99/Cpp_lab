#include <stdio.h>
int main()
{
	// Q124. Transpose of a 4 x 4 matrix
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int i,j,k;
     printf("\nMATRIX :\n");
      for(i=0 ; i<4 ; i++)
      {
          for(j=0 ; j<4 ; j++)
          {
              printf("%d\t",a[i][j] ) ;
          }
          printf("\n");
      }
     

	int t[4][4] ;
	for(i=1;i<4;i++)
	{
	    for(j=1;j<4;j++)
	    {
	        t[i][j] = 0 ;
	    }
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		   t[i][j] = a[j][i] ;
		}
		 
	}
    printf("\nTRANSPOSE :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		  printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

