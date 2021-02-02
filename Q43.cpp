#include <stdio.h>
#include <math.h>
int main()
{
	//Q43 Worker efficiency 
	int t;
	printf("Enter the time required by the worker to complete the given task = ");
	scanf("%d",&t);	
	if ( t>=2 && t<=3)
	   printf("The worker is highly efficient!");
	else if ( t>3 && t<=4 )
	   printf("The worker needs to improve his speed...");
	else if ( t>4 && t<=5)
	   printf("The worker must undergo training");
	else if (t>5)
	   printf("The worker has to leave the company!");
	else
	   printf("Please enter valid time");
	   
	return 0;
	
}
