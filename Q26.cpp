#include <stdio.h>
int main()
{
	//Q26 To check whether 3 points lie on the same line or not
	// y=mx+c where m= slope of line
	// 3 points lie on the same line if their slopes are equal
	int x1,x2,x3,y1,y2,y3,m1,m2;
	printf("Please enter the x1 =\t");
	scanf("%d",&x1);
	printf("Please enter the y1 =\t");
	scanf("%d",&y1);
	printf("Please enter the x2 =\t");
	scanf("%d",&x2);
	printf("Please enter the y2 =\t");
	scanf("%d",&y2);
	printf("Please enter the x3 =\t");
	scanf("%d",&x3);
	printf("Please enter the y3 =\t");
	scanf("%d",&y3);
	printf("Point 1 is (%d,%d)\n",x1,y1);
	printf("Point 2 is (%d,%d)\n",x2,y2);
	printf("Point 3 is (%d,%d)\n",x3,y3);	
	m1=((y2-y1)/(x2-x1));
	m2=((y3-y1)/(x3-x1));
	if (m1==m2)	
		printf("The points lie on the same line");
	else	
		printf("The points do NOT lie on the same line");	
	return 0;
}
