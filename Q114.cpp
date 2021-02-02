#include <stdio.h>
int main()
{   // Q114. Bubble Sort in Ascending order & Descending Order
    // repeatedly swapping the adjacent elements if they are in wrong order.
    // the array keeps getting sorted from the right
    int n,i,j,temp,f=0;
    printf("Enter the no of element in array = ");
    scanf("%d",&n);
    int arr[n] ;
    for(i=0 ; i<=n-1 ; i++)
    {
        printf("Enter element of unsorted array = ");
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array : ");
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]); 
    printf("\nSorted list is : \n");
    printf("Ascending Order = ");
    for(i=0; i < n-1 ; ++i)
    {
      for(j=0; j < n-1-i ; ++j)
      {
        if (arr[j] > arr[j+1])
        {
          // swapping
          temp = arr[j] ;
          arr[j] = arr[j+1] ;
          arr[j+1] = temp ;
        } 
      }
    }
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
    printf("\nDescending Order = ");
    for(i=0; i < n-1 ; ++i)
    {
      for(j=0; j < n-1-i ; ++j)
      {
        if (arr[j] < arr[j+1])
        {
          // swapping
          temp = arr[j] ;
          arr[j] = arr[j+1] ;
          arr[j+1] = temp ;
        } 
      }
    }
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
   
 return 0;
}  

