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
	int days,d,m,y,i ;
	int y_diff, no_leap_yr,odd_days ;
	int yr_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
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
	while(1)
	{
		printf("Enter the date of month = ");
	    scanf("%d",&d) ;
	    if (is_leap(y) && m == 2)
	      yr_days[m]++ ;
	    if ( d>0 && d<= yr_days[m])
	      break;
	    else 
	      printf("Invalid Input! Please Enter again!\n");	
	}
	printf("*****************************************************************************");
	printf("\n\n\t\t%d ",d);
	disp_month(m);
	printf("%d\n",y);
	printf("\n----------------------------------------------------\n");
	printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n");
	printf("\n----------------------------------------------------\n");	
	y_diff = y - 1900 ;
	no_leap_yr = y_diff / 4 ;
	if (is_leap(y))
	{
	  no_leap_yr-- ;	
	}	  
	odd_days = (no_leap_yr*2) ;
	odd_days += (y_diff - no_leap_yr) ;
	for(i=1 ; i<m ; i++)
	{
		odd_days += yr_days[i] ;
	}	
	if (m > 2 && is_leap(y))
	   odd_days++ ;
	odd_days = odd_days % 7 ;
	for(i=1 ; i<=odd_days ; i++)
	    printf("\t");	
	// DAYS
	if (m==2 && is_leap(y))
        days = 29 ;
	else 
	    days = yr_days[m] ;
	for(i=1 ; i<=days ; i++)
	{
		if( (i+odd_days) % 7 == 1 )
		  printf("\n");
		if (i==d)
		 printf("|%d|\t",i);
		else
		 printf("%d\t",i);			
	}
	// Day on the Entered date
	int o;
	printf("\n\nThe Day on the entered date is : ");
	o = (odd_days + d ) % 7;
	if (o==1)
	  printf("Monday\n");
	if (o==2)
	  printf("Tuesday\n");
	if (o==3)
	  printf("Wednesday\n");
	if (o==4)
	  printf("Thursday\n");
	if (o==5)
	  printf("Friday\n");
	if (o==6)
	  printf("Saturday\n");
	if (o==0)
	  printf("Sunday\n");
	printf("*****************************************************************************");
	  
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
	if (m==1)
	 printf("January ");
	else if (m==2)
	 printf("Febuary ");
	else if (m==3)
	 printf("March ");
	else if (m==4)
	 printf("April ");
	else if (m==5)
	 printf("May ");
	else if (m==6)
	 printf("June ");
	else if (m==7)
	 printf("July ");
	else if (m==8)
	 printf("August ");
	else if (m==9)
	 printf("September ");
	else if (m==10)
	 printf("October ");
	else if (m==11)
	 printf("November ");
	else if (m==12)
	 printf("December ");
	
}

