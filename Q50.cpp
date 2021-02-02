#include <stdio.h>
int main()
{
	// Q50 Grade of steel
	int h,ts,grade;
	float c;
	printf("What is the hardness = ");
	scanf("%d",&h);
	printf("What is the carbon content = ");
	scanf("%f",&c);
	printf("What is the tensile strength = ");
	scanf("%d",&ts);
	if (h>50 && c<0.7 && ts>5600 )
	   grade=10;
	else if (h>50 && c<0.7 && ts<=5600)
	   grade=9;
	else if (h<=50 && c<0.7 && ts>5600 )
	   grade=8;
	else if (h>50 && c>=0.7 && ts>5600 )
	   grade=7;
	else if (h>50 || c>=0.7 || ts>5600 )
	   grade=6;
	else
	   grade=5;
	printf("The ouput grade of the steel is =%d \n",grade);
	return 0;
}
	
		
		
		
			
	
