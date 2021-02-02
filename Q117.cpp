#include <stdio.h>
int main()
{  //Q117 Prime nos from 1-100
   int arr[100],i,j ;
   for(i=1 ; i<=100 ;i++)
   {
       arr[i-1] = i ;
   }
   for(i=0 ; i<100 ; i++)
      printf("%d ",arr[i]) ;
   for(i=1; i<=100 ; i++)
   {
       if (arr[i]==0)
       {
           continue ;
       }
       for(j = i+1 ; j<=100 ; j++)
       {  
          if (arr[j] % arr[i] == 0)
          {
              arr[j] = 0 ;
          }
       }
   }
   printf("\nPrime numbers from 1-100 are : ");
   for(i=0 ; i<100 ;i++)
   {
       if (arr[i] != 0)
         printf("%d ",arr[i]);
   }
   return 0;
}

