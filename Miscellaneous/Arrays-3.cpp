#include <stdio.h>

int main()
{
	// to copy the contents of one array into another in the reverse order
	int a[5]={1,2,3,4,5},b[5];
	int i;
	for(i=4;i>=0;i--)
	{
		b[4-i]=a[i];
	}
	//printing contents of array b
	for(i=0;i<=4;i++)
	{
		printf("%d  ",b[i]);
	}	
	
	return 0;
	
}
