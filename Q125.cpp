#include <stdio.h>
int main()
{
	// Q125. To sort all the elements of a 4 x 4 matrix.
    int r = 4 , c = 4 ;
    int a[4][4]={{9,3,8,1},{2,4,0,15},{14,12,7,5},{6,10,13,11}};
	int i,j,k = 0;
    printf("\nMATRIX :\n");
      for(i=0 ; i<4 ; i++)
      {
          for(j=0 ; j<4 ; j++)
          {
              printf("%d\t",a[i][j] ) ;
          }
          printf("\n");
      }
    
	//Converting 2-D Array to 1-D Array 
	int l,temp ;
	l = r * c ;
	int a1[l] ;
	for(i=0 ; i < r ; i++)
	{
	    for(j=0 ; j < c ; j++)
	    {
	        a1[k] = a[i][j] ;
	        k++ ; 
	    }
	}
	// Bubble Sorting of 1-D Array
	for(i=0 ; i<l-1 ; i++)
	{
	    for(j=0 ; j<l-1-i ; j++)
	    {
	        if (a1[j] > a1[j+1])
	        {
	            //swapping
	            temp = a1[j] ;
	            a1[j] = a1[j+1] ;
	            a1[j+1] = temp ;
	        }
	    }
	}
	// Converting back to 1-D Array
	k = 0;
	for(i=0 ; i< r  ; i++)
	{
	    for(j=0 ; j<c ; j++)
	    {
	        a[i][j] = a1[k] ;
	        k++;
	    }
	}
	// Displaying Sorted Array
	printf("\nSORTED MATRIX: \n") ;
	for(i=0 ; i< r  ; i++)
	{
	    for(j=0 ; j<c ; j++)
	       printf("%d\t",a[i][j]) ;
	    printf("\n") ;
	}
	    
	return 0;
}

