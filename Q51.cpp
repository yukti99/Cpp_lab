#include <stdio.h>
int main()
{
	// Q51 Library
	int l,fine;
    printf("Enter the no of days you are late to return the book = ");
    scanf("%d",&l);
    if (l<=5)
       fine=0.5*l;
    else if (l>=6 && l<=10)
       fine=l;
    else if (l>10 && l<=30)
       fine=5*l;
    else
       {
       	printf("Sorry! Your library membership has been cancelled..\n");
        return 0;
	   }        
    printf("Your fine = Rs.%d",fine);
    return 0;
         
}
