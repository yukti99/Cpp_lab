#include <stdio.h>
int main()
{
	// Q66 f) Fibonacci series : 0,1,1,2,3,5,8,...n terms	
	int n,a=0,b=1,temp,i,sum=0;
	printf("Enter the no of elements in the series =");
	scanf("%d",&n);
	printf("The terms in the series are : ");
	printf("%d ",a);
	for(i=1;i<=n-1;i++)
	{
		// swapping a & b 
	    temp=a;
	    a=b;
	    b=temp;	
	    b=a+b;
	    printf("%d ",a);
	    sum+=a;
	}
	printf("\nThe sum = %d",sum);	
	return 0;
	 
}
