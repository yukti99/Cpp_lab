#include <stdio.h>
int is_leap(int y) ;
void disp_month(int m);
int main()
{
	/* Q139.Develop a program that receives the month and year from the keyboard as integers 
	   and prints the calendar in the following format.
     September 2004
Mon Tue Wed Thu Fri Sat Sun
          1  2   3   4   5
 6   7    8  9  10  11  12
13  14   15 16  17  18  19
20  21   22 23  24  25  26
27  28   29 30
Note that according to the Gregorian calendar 01/01/1900 was Monday. 
With this as the base the calendar should be generated
	 */
	int days,m,y ;
	printf("\nThe base of this calender is Gregorian\n");
	while(1)
	{
		printf("Enter the month(1/2/3.../12) = ");
	    scanf("%d",&m) ;
	    if (m<=12 && m>=1)
	      break;
	    else 
	      printf("Invalid Input! Please Enter again!\n")	;
		
	}
	while(1)
	{
		printf("Enter the year = ");
	    scanf("%d",&y) ;
	    if ( y!= 0 && y>=1900)
	      break;
	    else 
	      printf("Invalid Input! Please Enter again!\n");	
	}
	printf("\t\t\t");
	disp_month(m);
	printf("%d\n",y);
	printf("\n-----------------------------------------------------\n");
	printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
	printf("\n-----------------------------------------------------\n");
	int y_diff, no_leap_yr,odd_days ;
	y_diff = y - 1900 ;
	no_leap_yr = y_diff / 4 ;
	if (is_leap)
	  no_leap_yr-- ;
	odd_days = no_leap_yr ;
	
	
	// DAYS
	if (m==4||m==6||m==9||m==11)
	 days = 30;
	else if (m == 2)
   	{
		if (is_leap(y))
		  days=29 ;
		else
		  days=28 ;
	}
	else
	 days = 31 ;
	// Finding the starting day of the month acc to gregorian calender

	
	
   
   
   
   return 0; 
}
int is_leap(int y) 
{
	if ( (y%4==0) && (y%100!=0) || (y%400==0) )
	   return 1;
	else 
	   return 0;
}
void disp_month(int m)
{
	printf("\n\n");
	if (m==1)
	 printf("\t\tJanuary ");
	else if (m==2)
	 printf("\t\tFebuary ");
	else if (m==3)
	 printf("\t\tMarch ");
	else if (m==4)
	 printf("\t\tApril ");
	else if (m==5)
	 printf("\t\tMay ");
	else if (m==6)
	 printf("\t\tJune ");
	else if (m==7)
	 printf("\t\tJuly ");
	else if (m==8)
	 printf("\t\tAugust ");
	else if (m==9)
	 printf("\t\tSeptember ");
	else if (m==10)
	 printf("\t\tOctober ");
	else if (m==11)
	 printf("\t\tNovember ");
	else if (m==12)
	 printf("\t\tDecember ");
	
}

