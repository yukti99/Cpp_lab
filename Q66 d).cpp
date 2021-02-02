#include <stdio.h>
int main()
{
	// Q66 d) 2,4,6,8,......n terms
	int n,i,j=1,sum=0;
	printf("Enter the no of elements in the series = ");
	scanf("%d",&n);
	printf("The terms in the series are : ");
	for(i=2;j<=n;i+=2)
	{
		printf("%d ",i);
		sum+=i;
		j++;
	}
	printf("\nThe sum = %d",sum);	
	return 0;
	 
}
