#include <stdio.h>
#include <math.h>
int main()
{
	//Q54 Palindrome
	int n,n2,n3,d=0,a,r;
	printf("Enter any number = ");
	scanf("%d",&n);
	n2=n;
	// finding the no of digits in the given no
	while (n!=0)
	{		
		a=n%10;
		n=n/10;
		d++;		
	}
	n=n2;
	// finding the reverse of given no	
	while (n!=0)
	{   
	    r = n%10;
		n = n/10;		
		n3+= (pow(10,d-1))*r ;
		d--;
	}
	n=n2;
	printf("The reverse of %d is = %d\n",n,n3);
	if (n==n3)
	   printf("The no is a Palindrome");
	else
	   printf("The no is NOT a Palindrome");
	return 0;
}
