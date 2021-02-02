#include <stdio.h>
int main()
{
	// Q66 e) 1,2,4,7,11,.....n terms
	// logic : 1+1=2,2+2=4,4+3=7,7+4=11,...
	int n,i,j=1,sum=0;
	printf("Enter the no of elements in the series =");
	scanf("%d",&n);
	printf("The terms in the series are : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",j);	
		sum+=j;		
		j+=i;	
		
	}
	printf("\nThe sum = %d",sum);	
	return 0;
	 
}
