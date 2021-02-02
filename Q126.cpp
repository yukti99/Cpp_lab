#include<stdio.h>
#include<math.h>
int main()
{   // Q126. To find the distance of last point from the first point 
	int x[10];
	int a,b,s1,s2,s3;
	float d,sum=0.0;
	int y[10];
	printf("enter coordinates of 10 points");
	int i=0,j=0;
	// x & y coordinates stored in arrays
	for(i=0;i<10;i++)
	{
	  printf("enter coordinates of point %d \n",i+1);
	  scanf("%d%d",&x[i],&y[i]);
    }
	for(i=0;i<9;i++)
	{
		a=x[i+1]-x[i]; // diff of two consecutive points
		b=y[i+1]-y[i];
		s1=a*a;
		s2=b*b;	
		s3=s1+s2;
		d=sqrt(s3);
		printf("sum of distance between %d and %d points is \n %f",i,(i+1),d);
		sum=sum+d;
	}
	printf("Distance between fist and last point is \n %f",sum);
	}

