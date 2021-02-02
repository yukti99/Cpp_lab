#include <stdio.h>
int main()
{   
    // Q21
    float s,p,c,c1;
	printf("Enter the selling price of 15 items =\t");
	scanf("%f",&s);
	printf("Total profit earned =\t");
	scanf("%f",&p);
	c=s-p;
	c1=c/15;
	printf("The cost price of 1 item =%.1f\t",c1);
	return 0;
	
}
