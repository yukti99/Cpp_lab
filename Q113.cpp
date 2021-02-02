#include <stdio.h>
int main()
{   // Q113. Selection Sort in Ascending order & Descending Order
    // Repeated selection of smallest element in unsorted array 
    int n,i,temp,small,j,pos;
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
    for(i=0; i<=n-1 ; i++)
    {
        small = arr[i] ;
        pos = i ;
        for(j = i+1 ; j<=n-1 ; j++)
        {
            if (small > arr[j])
            {
                small = arr[j] ;
                pos = j ;
            }
        }
        temp = arr[i] ;
        arr[i] = small ;
        arr[pos] = temp ;
    }
    
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
        
    printf("\nDescending Order = ");
    for(i=n-1 ; i>=0 ; i--)
    {
      small = arr[i] ;
      pos = i ;
      for(j = i-1 ; j>=0 ; j-- )
      {
          if (small > arr[j])
          {
            small = arr[j] ;
            pos = j ;
          }
      }
      temp = arr[i];
      arr[i] = small ;
      arr[pos] = temp ;
    }
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
 return 0;
}

