#include <stdio.h>
int fact(int);
int main()
{
	//recurssion - factorial
	int n,prod;
    printf("Enter n = ");
    scanf("%d",&n);
    prod=fact(n);
    printf("The factorial = %d",prod);
    return 0;
	
}
int fact(int n)
{
	int f;
	if (n==0)
	  return 1;
	if (n==1)
	  return 1 ;
	else
	{
		f =n*fact(n-1);
	    
	}
	return f;
}
