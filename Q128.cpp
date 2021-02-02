#include <stdio.h>
int main()
{
    // Q128.
    int i, j, a[5], count = 0 ; 
    int freq[5] ;
    for(i=0; i<5 ; i++ )
    {
        printf("Enter any positive no between 1 to 25 = ");
        scanf("%d",&a[i]) ;
        freq[i] = -1 ;
    }
    for(i=0 ; i<5 ; i++)
    {
      count = 1;
      for(j=i+1 ; j<5 ; j++)
      {
          if (a[i] == a[j])
          {
              count++ ;
              freq[j] = 0 ;
              
          }
      }
      if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<5; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }
    return 0;
}
