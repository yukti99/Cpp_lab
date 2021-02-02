#include <stdio.h>
int main()
{  //Q119 To check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.
  int n, i;
  printf("No of elements in array = ");
  scanf("%d",&n);
  int arr[n] ;
  for(i=0 ; i<n ; i++)
  {
    printf("Enter element-%d of the array = ",i+1);
    scanf("%d",&arr[i]); 
  }
  for(i=0 ; i<n/2 ; i++)
  {
     if (arr[i] == arr[n-i-1])
     {
         printf("\nElement-%d from start = Element-%d from end\n",i+1,i+1) ;
     }
     else
     {
         printf("\nElement-%d from start NOT = Element-%d from end\n",i+1,i+1) ; 
     }
 }
   return 0;
}

