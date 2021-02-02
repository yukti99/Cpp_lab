#include <stdio.h>
int main()
{
	// Q66 a) 1/1! + 2/2! +....  till n terms using for loop
	int n,i,j,f=1;
	float sum=0;
	printf("Enter the no of elements in the series = ");
	scanf("%d",&n);  		
    for(i=1;i<=n;i++)
    { 	  
      for(j=i;j>=1;j--)
      { 
	    // finding factorial        
      	f*=j; 
      }	 
	  sum+= (1.0*i)/(1.0*f); 
      f=1;      
	} 
	printf("\nThe sum = %f",sum);
	return 0;
	 
}
