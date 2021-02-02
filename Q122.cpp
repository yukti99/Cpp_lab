#include <stdio.h>
int main()
{
    // Q122  The addition of two 3 x 3 matrix
      int arr1[3][3],arr2[3][3],arr[3][3] ;
      int i, j, k ;
      printf("MATRIX-1\n") ;
      for(i=0 ; i<3 ; i++)
      {
          printf("******************************************\n") ;
          for(j=0 ; j<3 ; j++)
          {
              printf("Enter element for the 2-D array = ");
              scanf("%d\t",&arr1[i][j]) ;
          }
      }
      printf("MATRIX-2\n") ;
      for(i=0 ; i<3 ; i++)
      {
          printf("******************************************\n") ;
          for(j=0 ; j<3 ; j++)
          {
              printf("Enter element for the 2-D array = ");
              scanf("%d\t",&arr2[i][j]) ;
          }
      }
      printf("\nMATRIX - 1 :\n");
      for(i=0 ; i<3 ; i++)
      {
          for(j=0 ; j<3 ; j++)
          {
              printf("%d\t",arr1[i][j] ) ;
          }
          printf("\n");
      }
      printf("\nMATRIX - 2 :\n");
      for(i=0 ; i<3 ; i++)
      {
          for(j=0 ; j<3 ; j++)
          {
              printf("%d\t",arr2[i][j] ) ;
          }
          printf("\n");
      }
      printf("\nAfter adding Matrix 1 and 2 :\n") ;
      int max ;
      max = arr[0][0] ;
      for(i=0; i<3; i++)
      {
          for(j=0; j<3; j++)
          {
              arr[i][j]= 0;
              for(k=0; k<3 ; k++)
              {
                  arr[i][j] = arr1[i][j] + arr2[i][j] ;
              }
          }
      }
      for(i=0 ; i<3 ; i++)
      {
          for(j=0 ; j<3 ; j++)
          {
              printf("%d\t",arr[i][j] ) ;
          }
          printf("\n");
      }
      
    return 0;
}

