#include <stdio.h>
int main()
{
	// Q135. To store marks of 10 students in array, find average
	float a[10] ;
	int i ;
	for(i=0 ; i<10 ; i++)
	{
	    printf("Enter the marks of student-%d = ",i+1) ;
	    scanf("%f",&a[i]) ;
	}
	float avg,sum=0;
	for(i=0 ; i<10 ; i++)
	   sum += a[i] ;	
	avg = sum / 10.0 ;
	printf("The average marks are = %.2f",avg) ;
	return 0;
}

