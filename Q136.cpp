#include <stdio.h>
int main()
{
	// Q136. To add or subtract two 3*3 int array where choice is asked from user.
  int i, j ;
  int a1[3][3] = {{1,3,5},{7,9,11},{13,15,17}} ;
  int a2[3][3] = {{2,4,6},{8,10,12},{14,16,18}} ;
  printf("\nMATRIX-1 :\n");
  for(i=0 ; i<3 ; i++)
  {
      for(j=0 ; j<3 ; j++)
      {
          printf("%d\t",a1[i][j] ) ;
      }
      printf("\n");
  }
  
  printf("\nMATRIX-2 :\n");
  for(i=0 ; i<3; i++)
  {
      for(j=0 ; j<3 ; j++)
      {
          printf("%d\t",a2[i][j] ) ;
      }
      printf("\n");
  }
  int m ;
  printf("Do you want to add or subtract matrices ? ");
  scanf("%d",&m);     
  
  int a[3][3] ;       
  
  for(i=0 ; i<3 ; i++)
  {
   for(j=0 ; j<3 ; j++)
   {
    if (m==1)
     a[i][j] = a1[i][j] + a2[i][j] ;
    else
     a[i][j] = a1[i][j] - a2[i][j] ;            
   }
  } 
  if (m==1)
  printf("\nAddition of two matrices:\n");
  else
  printf("\nSubtraction of two matrices:\n");
  
  for(i=0 ; i<3 ; i++)
  {
      for(j=0 ; j<3 ; j++)
      {
          printf("%d\t",a[i][j]) ;
      }
      printf("\n");
  }
  
  
  return 0;

}
