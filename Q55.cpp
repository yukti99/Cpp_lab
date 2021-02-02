#include <stdio.h>
int main()
{
	//Q55 To find the HCF and LCM of two numbers
	int x,y,a,b,hcf,lcm,temp;
	printf("Enter two integers = ");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while (b!=0)   // loop breaks when b=0
	{    
	   temp=b;
	   b= a%b;      // b becomes the remainder of a and b
	   a=temp;      // a becomes the initial value of b
	}      
	// now a is that smallest value of b for which the remainder of a and b = 0
	hcf=a;
	lcm= (x*y)/hcf ;
	printf("The HCF of %d & %d = %d\n",x,y,hcf);
	printf("The LCM of %d & %d = %d",x,y,lcm);   	  
	return 0;
}
