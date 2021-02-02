#include <stdio.h>
int main()
{
    // Q121  Program to pick up the largest number from any 5 row by 5 column matrix.
      int arr[5][5] ;
      int i, j ;
      for(i=0 ; i<5 ; i++)
      {
          printf("******************************************\n") ;
          for(j=0 ; j<5; j++)
          {
              printf("Enter element for the 2-D array = ");
              scanf("%d\t",&arr[i][j]) ;
          }
      }
      for(i=0 ; i<5 ; i++)
      {
          for(j=0 ; j<5 ; j++)
          {
              printf("%d\t",arr[i][j] ) ;
          }
          printf("\n");
      }
      int max ;
      max = arr[0][0] ;
      for(i=0; i<5; i++)
      {
          for(j=0; j<5; j++)
          {
              if (max < arr[i][j])
              {
                  max = arr[i][j] ;
              }
          }
      }
      printf("The largest number in the matrix = %d",max) ;    
    return 0;
}

