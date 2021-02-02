#include <stdio.h>
int main()
{
	// Q137. To multiply 2 3*3 matrics.
    int i, j, k ;
    int a1[3][3] = {{1,3,5},{7,9,11},{13,15,17}} ;
    int a2[3][3] = {{2,4,6},{8,10,12},{14,16,18}} ;
    printf("\nMATRIX-1 :\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
              printf("%d\t",a1[i][j] ) ;
        printf("\n");
    }
      
    printf("\nMATRIX-2 :\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
              printf("%d\t",a2[i][j] ) ;
        printf("\n");
    }
    int m[3][3] ;
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	   m[i][j] = 0;
	}
    for(i=0 ; i<3 ; i++)
     {
        for(j=0 ; j<3 ; j++)
        {
          for(k=0 ; k<3 ; k++)
            m[i][j] += a1[i][k] * a2[k][j] ;                 
        }
    }
    printf("\nAfter Multiplication :\n") ;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
           printf("%d\t",m[i][j]) ;
        }
        printf("\n");
    }

return 0;
}

