#include <stdio.h>
#include <math.h>
int main()
{
	//Q59  how many days and how many weeks have passed between the dates
	// e.g. in between 01/01/92 to 31/05/92
	int d1,m1,y1,d2,m2,y2,weeks,days,months,yrs;
	int mon[12]=[31,28,31,30,31,30,31,31,30,31,30,31]
	printf("Enter the 1st date i.e. day, month & year = ");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("Enter the 2nd date i.e. day, month & year = ");
	scanf("%d%d%d",&d2,&m2,&y2);
	printf("The days and weeks between %d/%d/%d and %d/%d/%d = \n",d1,m1,y1,d2,m2,y2);
	days= (d2-d1)+1;
	months=(m2-m1) +1; 
	if 
	yrs= y2-y1;
	
	
	
	
		  
	return 0;
}
