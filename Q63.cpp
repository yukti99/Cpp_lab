#include <stdio.h>
int main()
{
	// Q63 The range of a set of numbers
	// Range is the difference between the smallest and biggest number in the list.
	int n,a,max,min,i=0,range;
	printf("Enter the number of values you want in the list = ");
	scanf("%d",&n);
	printf("Enter first element = ");
	scanf("%d",&a);
	max=a;
	min=a;
	while (i< n-1)
	{
		printf("Enter another no = ");
		scanf("%d",&a);		
		// for greatest value
		if (a>max)
		  max=a;		
		// for smallest value
		if (a<min)
		  min=a;		
		i++;
        		
	}
	range = max - min ;
	printf("The range of given list is = %d - %d = %d",max,min,range);			  	  
	return 0;
}
