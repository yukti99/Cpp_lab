#include <stdio.h>
int main()
{
	// Q52 Checking the validity of a triangle
	int a,b,c;
	printf("Enter the three sides of a triangle = ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The 3 sides of triangle are =%d,%d,%d \n",a,b,c);
	// finding the greatest side of the triangle
	int max=0,min=0,m=0;
	if (a>b)
	  {
	    if (c>a)
	       max=c;
	    else
	       max=a;
	  }
	else
	  {	    
	    if (c>b)
	       max=c;
	    else
	       max=b;
	  }
	printf("The greatest side = %d\n",max);
	if (a+b > max && b+c > max && a+c > max)
	   printf("The triangle is valid");
	else 
	   printf("The triangle is not valid");
	return 0;
		
}
