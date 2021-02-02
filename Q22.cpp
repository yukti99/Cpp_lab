#include <stdio.h>
int main()
{
	// Q22 odd/even
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	printf("The given number = %d\n",n);
	if (n%2==0)
	{
		printf("The number is even!");
		
	}
	else
	{
		printf("The number is odd!");
	}
	return 0;
	
}
