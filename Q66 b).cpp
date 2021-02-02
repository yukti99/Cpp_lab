#include <stdio.h>
int main()
{
	// Q66 b) 1,2,....,n terms
	int n,i,sum=0;
	printf("Enter the no of elements in the series = ");
	scanf("%d",&n);
	printf("The terms in the series are : ");	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		sum+=i;
	}
	printf("\nThe sum = %d",sum);
	return 0;
	 
}
