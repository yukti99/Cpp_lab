#include <stdio.h>
#include <math.h>
int main()
{
	//Q56 Armstrong numbers: the sum of the cube of the digits is equal to the number itself
	// e.g. 153 = 1^3 +5^3 + 3^3 = 1 + 125 + 27= 153
	int n,i,r,cube,sum=0;
	printf("Enter any no = ");
	scanf("%d",&n);	
	i=n;
	while (n!=0)
	{
		r = n%10 ;
	    n = n/10 ;
	    cube = pow(r,3);
	    sum=sum+cube ;
	}	
	n=i;
		    
	if (n==sum)
	    printf("YES, %d is an Armstrong number",n) ;
	else
	    printf("NO, %d is NOT an Armstrong number",n) ;
	sum=0;   
	    	
return 0;
}
