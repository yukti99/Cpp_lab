#include <stdio.h>
#include <math.h>
int main()
{
	//Q25 	
	int n,n2=0,d=0,r;
	printf("Enter any 5-digit number = ");
	scanf("%d",&n);
	while (d<5)
	{
		r=n%10;
		n=n/10;		
		n2+= (pow(10,d)*((r+1)%10));
		d++;
	}	
	printf("%d",n2);
	return 0;
	

}
