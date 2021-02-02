#include <stdio.h>
int main()
{  //Q118 To copy the contents of one array into another in the reverse order
  int n, i, j;
  printf("No of elements in array = ");
  scanf("%d",&n);
  int arr1[n] ;
  for(i=0 ; i<n ; i++)
  {
    printf("Enter element-%d of the array = ",i+1);
    scanf("%d",&arr1[i]); 
  }
  int arr2[n] ;
  j=0 ;
  for(i=n-1 ; i>=0 ; i--)
  {
      arr2[j] = arr1[i] ;
      j++ ;
  }
  printf("\nReversed array = ") ;
  for(i=0 ; i<n ; i++ )
  {
      printf("%d ",arr2[i]);
  }
  
   return 0;
}

