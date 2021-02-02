#include <stdio.h>
int main()
{
	//Q56 Armstrong numbers: the sum of the cube of the digits is equal to the number itself
	// e.g. 153 = 1^3 +5^3 + 3^3 = 1 + 125 + 27= 153
	int temp,n,r,sum;
	// checking from 1 to 500
	printf("The Armstrong numbers are = \n");
	for(n=1;n<=500;n++)
	{   
		sum=0;
		temp=n;
		while (temp!=0)
	    {
		   r = temp%10 ;
		   temp = temp/10 ;		   
		   sum= sum+ (r*r*r) ;
	    }
	    
	    if (n==sum)
	       printf("%d  ",n);     
	    
	}	  	  
	return 0;
}
