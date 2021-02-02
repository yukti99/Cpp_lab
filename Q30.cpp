#include <stdio.h>
#include <math.h>
int main()
{
	//Q30 
	int a,b,c;

	printf("Enter the 3 angles of a triangle= ");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b+c==180)
	  printf("Valid triangle!");
	  
	else
	  printf("Invalid triangle...");	
	return 0;
}
