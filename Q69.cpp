#include <stdio.h>
int main()
{
	// Q69 Day on 1st january of any year
	// Gregorian Calender
	int y,d,leap_yr,normal_yr,days;
	printf("Enter any year = ");
	scanf("%d",&y);
	d=y-1900;
    leap_yr=d/4;
	normal_yr=d - leap_yr ;
	days= 365*normal_yr + 366*leap_yr ;	
	printf("The day on January 1st of the year %d is : ",y);
	if (days%7 ==0)
	 printf("Monday");
	else if (days%7==1)
	  printf("Tuesday");
	else if (days%7==2)
	  printf("Wednesday");
	else if (days%7==3)
	  printf("Thursday");
	else if (days%7==4)
	  printf("Friday");
	else if (days%7==5)
	  printf("Saturday");
	else if (days%7==6)
	  printf("Sunday");
	return 0;
}
