#include <stdio.h>
int main()
{  // Q116. Merging of two sorted arrays
    int i,j,k,m,n;
    printf("No of elements in array-1 = ");
    scanf("%d",&m);
    int arr1[m] ;
    printf("Sorted elements of array-1\n");
    for(i=0 ; i<=m-1 ; i++)
    {
        printf("Enter element %d of array-1 = ",i+1) ;
        scanf("%d",&arr1[i]) ;
    }
    printf("No of elements in array-2 = ");
    scanf("%d",&n);
    int arr2[n] ;
    printf("Sorted elements of array-2\n");
    for(i=0 ; i<=n-1 ; i++)
    {
        printf("Enter element %d of array-2 = ",i+1) ;
        scanf("%d",&arr2[i]) ;
    }
    int arr3[m+n] ;
    i=0;
    j=0;
    k=0;
    while( i<m && j<n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i] ;
            i++ ;
        }
        else
        {
            arr3[k] = arr2[j] ;
            j++ ;
        }
        k++ ;
    }
    if (i>=m)
    {
        while(j<n)
        {
            arr3[k] = arr2[j] ;
            j++ ; 
            k++ ;
        }
    }
    if (j>=n)
    {
        while(i<m)
        {
            arr3[k] = arr1[i] ;
            i++ ;
            k++ ;
        }
    }
    printf("\nAfter merging : ") ;
    for(i=0 ; i<m+n ; i++)
       printf("%d ",arr3[i]) ;
    
 return 0;
}  

