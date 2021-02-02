#include <stdio.h>
int main()
{
	//Q61
	int n,i=0,a,pos=0,neg=0,zero=0;
	printf("Enter the number of times you want to give input = ");
	scanf("%d",&n);
	while (i<n)
	{
		printf("Enter any numeric value = ");
		scanf("%d",&a);
		if (a>0)
		  pos++;
		else if (a<0)
		  neg++;
		else
		  zero++;
		i++;
		  
	}
	printf("Positive numbers entered = %d\n",pos);
	printf("Negative numbers entered = %d\n",neg);
	printf("Zeroes entered = %d\n",zero);		  	  
	return 0;
}
