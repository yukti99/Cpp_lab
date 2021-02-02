#include <stdio.h>
int main()
// Q23 Profit/Loss
{
	float sp,cp,p;
	printf("Enter cost price =\t");
	scanf("%f",&cp);
	printf("Enter selling price = \t");
	scanf("%f",&sp);
	if (sp>cp)
	{
		printf("Seller has made profit!");
		p=sp-cp;
		printf("The profit is =%.1f\t",p);
	}
	else
	{
		printf("losses incurred!");
		p=cp-sp;
		printf("The loss is =%.1f\t",p);
		
	}
	
	return 0;
	
}

