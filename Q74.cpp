#include <stdio.h>
int main()
{
	// Q74 for all positive integers i, j , k, and l from 1 through 1000, finds and prints all combinations of i, j , k, and I such that i + j + k = l and i < j < k < l.
	int i,j,k,l;
	for(l=1;l<=10;l++)
	{
	  for(k=1;k<=10;k++)
	    {
	      for(j=1;j<k;j++)
	       {
	         for(i=1;i<j;i++)
	           { 
	             if (i+j+k==l)
	             {
	               printf("%d + %d + %d = %d\n",i,j,k,l);
	             }
	           }
	        }
	    }
	 }	    
	   
	return 0;
}
