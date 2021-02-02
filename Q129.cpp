#include <stdio.h>
int main()
{
    // Q129.To determine if a square matrix is upper triangular,lower triangular or diagonal matrix
    int n;
    printf("Enter the number rows/columns of square matrix = ");
    scanf("%d",&n);
    int i ,j ;
    int a[n][n] ;
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            printf("Enter element of square matrix = ");
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\nEntered Matrix:\n");
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
          printf("%d\t",a[i][j] );
        printf("\n");
    }
    int d=0,u=0,l=0 ;
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            if (a[i][j] == 0 && j<i)
               u=1;
            else 
               u=0;
        }
    }
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            if (a[i][j] == 0 && i<j)
               l=1 ;
            else 
               l=0 ;
        }       
    }
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            if (a[i][j] != 0 && i==j)
               d=1;               
            else 
               d=0 ;
        }       
    }
    if (d==1)
      printf("DIAGONAL MATRIX\n");
    else if (u==1)
       printf("UPPER TRIANGULAR MATRIX\n");
    else if (l==1)
       printf("LOWER TRIANGULAR MATRIX\n");
    else
       printf("NORMAL MATRIX\n");
    return 0;
}




