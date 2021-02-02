#include <stdio.h>
int main()
{
	//Q62 Octal Equivalent of a decimal number
	int d,t,octal=0,i=1,r;
	printf("Enter any decimal value = ");
	scanf("%d",&d);
	t=d;
	while (d!=0)
	{
	   r=d%8;
	   d=d/8;
	   octal += r*i;
	   i*=10;
	}
	d=t;
	printf("The octal equivalent of decimal value %d is = %d",d,octal);  			  	  
	return 0;
}
