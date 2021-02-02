#include <stdio.h>
#include <math.h>
int main()
{
	// Q31 The absolute value of a number
	float n,abs_value;
	printf("Enter any number = ");
	scanf("%f",&n);
	abs_value= abs(n);
	printf("The absolute value of %.2f is = %.2f ",n,abs_value);
	return 0;
	
}
