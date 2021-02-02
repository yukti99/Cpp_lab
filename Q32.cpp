#include <stdio.h>
int main()
{
	//Q32 Area and perimeter of a rectangle
	float l,b,a,p;
	printf("Enter the length and breadth of a rectangle = ");
	scanf("%f %f",&l,&b);
	a=l*b;
	p=2*(l+b);
	if (a>p)
	    printf("The area is greater than than the perimeter");
	    
	else
	    printf("The area is NOT greater than than the perimeter");
	return 0;
	
}
