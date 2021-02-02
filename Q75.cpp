#include <stdio.h>
int main()
{
	// Q75 Write a program to calculate overtime pay of 10 employees.
	// Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
	// Assume that employees do not work for fractional part of an hour.
	int i=1,o_pay,hr;
	
	while (i<=10)
	{
      printf("Enter the number of hours worker-%d worked = ",i);
	  scanf("%d",&hr);
	  if(hr>40)
	  {
	   o_pay = hr*12;
	   printf("The overtime pay is = Rs. %d\n",o_pay);
	  }
	  else
	   printf("Sorry! No overtime pay...\n"); 
	}
	
	
	return 0;
}
