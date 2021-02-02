#include <stdio.h>
#include <math.h>
int main()
// Q20
{
	// Cartesian coordinates into polar coordinates
	int x,y;
	float r,q;
	printf("Please enter the x coordinate =\t");
	scanf("%d",&x);
	printf("Please enter the y coordinate =\t");
	scanf("%d",&y);
	printf("The cartesian coordinates are (%d,%d)\n",x,y);
	r= pow((pow(x,2)+pow(y,2)),0.5);
	q= atan(y/x);
	printf("The polar coordinates are (%.1f,%.1f)\n",r,q);
	return 0;
	
}
