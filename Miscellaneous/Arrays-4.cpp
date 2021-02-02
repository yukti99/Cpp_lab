#include <stdio.h>
int a[9];
int main()
{
	//lol
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,*p;
	p=(a[0]);
	for(i=0;i<=8;i+=3)
	{
		printf("%d\n",*(p+i));
	}
	
	
	
	
	return 0;
	
}
