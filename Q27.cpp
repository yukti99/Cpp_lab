#include <stdio.h>
int main()
{
	// Q27 Greatest of three numbers
	int a,b,c;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	printf("Enter c = ");
	scanf("%d",&c);
	if (a>b && a>c)
		printf("The greatest number is = %d",a);
	if (b>a && b>c)
		printf("The greatest number is = %d",b);	
	if (c>b && c>a)
		printf("The greatest number is = %d",c);
	return 0;	
}
