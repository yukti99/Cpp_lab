#include <stdio.h>
int main()
{
	// Q66 c)1,3,5,...n terms
	int n,i,j=1,sum=0;
	printf("Enter the no of elements in the series = ");
	scanf("%d",&n);
	printf("The terms in the series are : ");	
	for(i=1;j<=n;i+=2)
	{
		printf("%d ",i);
		sum+=i;
		j++;
	}
	printf("\nThe sum = %d",sum);	
	return 0;
	 
}
