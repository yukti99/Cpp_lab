#include <stdio.h>
int main()
{   /* Q115.Insertion Sort in Ascending order & Descending Order
     At each iteration, insertion sort removes one element from the input data,
    finds the location it belongs within the sorted list, and inserts it there.
    It repeats until no input elements remain.array gets sorted from left*/
    int n,i,j,temp;
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
    for(i=1 ; i <= n-1 ; i++)
    {
        temp = arr[i] ;
        j = i-1 ;
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = temp ;
    }
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
    printf("\nDescending Order = ");
    for(i=1; i <= n-1 ; ++i)
    {   
        temp = arr[i];
        j = i-1 ;
        while(j>=0 && arr[j] < temp)
        {
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = temp ;
    }
      
    for(i=0; i<=n-1; i++)
        printf("%d ",arr[i]);
 return 0;
}      

