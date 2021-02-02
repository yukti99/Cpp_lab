#include <stdio.h>
int main()
{
	// Q40 leap year or not
	int y;
	printf("Enter any year = ");
	scanf("%d",&y);
	if ((y%4==0) && (y%100!=0) || (y%400==0))
	{
		printf("This is a leap year!");
	}
	else
	{
	    printf("This is NOT a leap year!");	
	}
	return 0;
	
}
