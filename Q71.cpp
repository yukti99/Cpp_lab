#include <stdio.h>
int main()
{
	// Q71 to find the value of one number raised to the power of another.
	int i,x,y,val=1;
	printf("The power = ");
	scanf("%d",&y);
	printf("The number to be raised to this power = ");
	scanf("%d",&x);
	for(i=1;i<=y;i++)
	{    val*=x;  
	}
	printf("The value of %d^%d = %d",x,y,val);	
	 
	return 0;
}
