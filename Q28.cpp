#include <stdio.h>
#include <math.h>
int main()
{
	// Q28 Reverse of a number...Checking if no is a palindrome
	// i.e palindrome of 121 is 121 (reverse no) but that of 123 is 321 so its not a palindrome
	int n,n2,n3,r,r2,s=0,t ;
	printf("Enter any number = ");
	scanf("%d",&n);	
	n2=n;
	n3=n;
	//finding no of digits in an integer
	t=0;
	while (n!=0)
	{
		r=n%10;
		n=n/10;
		t++;	
	}
	// t=no of digits in entered no
	printf("The no of digits in the entered no is =  %d\n",t);	
	while (n2!=0)
	{
		r2=n2%10;		
		n2=n2/10;
		s+=(pow(10,t-1))*r2;	
		t--;
		
	}
	printf("The reverse of the given no is = %d\n",s);
	if (n3==s)	
		printf("The given no is a palindrome\n");
	else 	
		printf("The given no is NOT a palindrome\n");	
	return 0;
}
