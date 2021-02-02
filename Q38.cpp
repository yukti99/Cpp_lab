#include <stdio.h>
int main()
{
	// Q38 leap year or not using conditonal/ ternary operators
	int y;
	printf("Enter any year = ");
	scanf("%d",&y);
	// note: An year is definitely a leap year if it is divisible by 400
	// note: An year is a leap year if it is divisible by 4 and not by 100
	(y%4==0 && y%100 != 0) ? printf("LEAP YEAR!") : (y%400==0) ? printf("LEAP YEAR!") : printf("NOT A LEAP YEAR") ;	

	return 0;
}

