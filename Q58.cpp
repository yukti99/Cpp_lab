#include <stdio.h>
int main()
{
	//Q58
	float x,y ;
	printf("Enter coordinates of any point = ");
	scanf("%f%f",&x,&y);
	if (x==0 && y==0)
	  printf("The point lies on the origin");	  
	else if (x==0)
	  printf("The point lies on y-axis");
	else if (y==0)
	  printf("The point lies on x-axis");	  
	else 
	  printf("The point neither lies on x-axis nor y-axis");	  
	return 0;
}
