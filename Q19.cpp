#include <stdio.h>
#include <math.h>
int main()
// Q19
{
	// Area of a triangle through Heron's formula
	// Heron's formula = (s(s-a)(s-b)(s-c))**0.5.....s=(a+b+c)/2
	int a,b,c,s;
	float area;
	printf("Enter the 3 sides of a triangle= ");
	scanf("%d %d %d",&a,&b,&c);
	// checking the side of the triangle
	if (a+b <= c) 
		{
			printf("Sorry! The given sides do not make a triangle...");
		}
	else if (b+c <= a)
	    {
			printf("Sorry! The given sides do not make a triangle...");
		}
		
	else if (a+c <= b)
	    {
			printf("Sorry! The given sides do not make a triangle...");
		}
	else
	  {
	  	s=(a+b+c)/2;
	    area= pow((s*(s-a)*(s-b)*(s-c)),0.5);
	    printf("the area of the triangle is = %.1f",area);	
	  	
	  }
	 
return 0;
}
