#include <stdio.h>
int main()
{
	// Q68 approx intelligence of a person,i=2+(y+0.5x)
	int y;
	float x,i;
	printf("i\ty\tx\n");
	for(y=1;y<=6;y++)
	{
		for(x=5.5;x<=12.5;x+=0.5)
		{
			i= 2 + (y + 0.5*x) ;
			printf("%.1f\t%d\t%.1f\n",i,y,x);
		}
	}
	return 0;
}