#include <stdio.h>
int main()
{
	// to search a no in an array print how many times it is present in it 
	int a[6];
	int i,item,count=0;
	for(i=0;i<=5;i++)
	{
		printf("Enter the element =  ");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched = ");
	scanf("%d",&item);
	for(i=0;i<=5;i++)
	{
		if (a[i]==item)
		{
			count++;
		}
	}
	if (count>=1)
	{
		printf("Yes it is present\n");
		printf("%d times",count);
	}
	else
	{
		printf("Not present");
	}
	
	
	return 0;
	
}
