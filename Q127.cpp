#include <stdio.h>
int main()
{
    /* Q127.
   A: 1,2,4,7,11,16, 22, then
   D1: 1,2,3,4, 5, 6
   D2:  1,1,1,1,  1
   D3:   0,0,0, 0
   */
   int i,  D1[24], D2[23], D3[22] ;
   for(i=0 ; i< 25 ; i++)
   {
       printf("Enter element = ");
       scanf("%d",&A[i]) ;
   }
   printf("First Difference : ") ;
   for(i=0 ; i<24 ; i++)
   {
       D1[i] = A[i+1] - A[i] ;
       printf("%d ",D1[i]) ;
   }
   printf("\n");
   printf("Second Difference : ") ;
   for(i=0 ; i<23 ; i++)
   {
       D2[i] = D1[i+1] - D1[i] ;
       printf("%d ",D2[i]) ;
   }
   printf("\n");
   printf("Third Difference : ") ;
   for(i=0 ; i<22 ; i++)
   {
       D3[i] = D2[i+1] - D2[i] ;
       printf("%d ",D3[i]) ;
   }
   printf("\n");
   
    return 0;
}


