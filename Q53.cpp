#include <stdio.h>
int main()
{
	//Q53 Factorial of a no entered : n!=n(n-1)(n-2)(n-3)...... 
	int n,f=1,i=1;
	printf("Enter any number = ");
	scanf("%d",&n);	
	for (i ; i<=n ; i++) 
	{   	    
		f= f*i;	
		
	}
	printf("The factorial of %d = %d \n",n,f);
	return 0;
}
