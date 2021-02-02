#include <stdio.h>
int add(int);
int main()
{
	//recurssion -sum of digits of a no using recurssion
	int n,sum=0,d;
    printf("Enter any n = ");    
    scanf("%d",&n);
    sum=add(n);
    printf("\nThe sum = %d",sum);
    return 0;
	
}
int add(int n)
{	
    int i,r,sum=0;
	if (n==0)
	   return 0;
	r=n%10;
	n=n/10;
	sum=r+add(n);
	return (sum);
			
}
