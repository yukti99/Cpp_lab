#include <stdio.h>
int main()
{
	//  Inserting an element into an array
	int a[9]={1,2,3,5,6,7,8,9};
	int item=4,index=3,i;
	a[8]=0;
	for(i=7;i>=index;i--)
	{
		a[i+1]=a[i]	;	
	}
	a[index]=item;
	printf("Array after inserting the item: \n");
	for(i=0;i<=8;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}

