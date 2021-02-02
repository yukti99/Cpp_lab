#include <stdio.h>
int main()
{  //Q120 a) To find the smallest number in an array using pointers.
    int n, i;
    printf("No of elements in array = ");
    scanf("%d",&n);
    int arr[n] ;
    for(i=0 ; i<n ; i++)
    {
      printf("Enter element-%d of the array = ",i+1);
      scanf("%d",&arr[i]); 
    }
    int *min,loc;
    min = &arr ;
    for(i=1 ; i<n ; i++)
    {
        if (*(arr + i)< *min)
        {
            *min = *(arr+i) ;
            loc = i ;
        }
    }
    printf("Minimum element is present at location number  %d and it's value is %d.\n", loc, *min);
   return 0;
}

