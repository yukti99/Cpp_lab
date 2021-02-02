#include <stdio.h>
#include <math.h>
int main()
{
	//Q57 Positon of a point wrt a circle
	float x,y,r,a,b;
	printf("Enter the radius of the circle = ");
	scanf("%f",&r);
	printf("Enter the coordinates of centre of the circle = ");
	scanf("%f%f",&x,&y);	
	printf("Enter the coordinates of the point = ");
	scanf("%f%f",&a,&b);
	// equation of the circle : (x-x1)^2 + (y-y1)^2 = r^2
	if ( pow(a-x,2) + pow(b-x,2) > pow(r,2) )
	   printf("The point lies outside the circle");
	else if ( pow(a-x,2) + pow(b-x,2) < pow(r,2) )
	   printf("The point lies inside the circle");
	else if ( pow(a-x,2) + pow(b-x,2) == pow(r,2) )
	   printf("The point lies ON the circle"); 	
	return 0;
}
