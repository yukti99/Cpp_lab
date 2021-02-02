#include <stdio.h>
int main()
{
	// max of three nos
	int a=8,b=-2,c=10,l;
	printf("Enter a,b,c= ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	  {
	  	l=a;
	  	if (c>l)
	  	   l=c;
	  	   
	  }
	else
	 {
	 	l=b;
	 	if (c>l)
	 	   l=c;
	 	   
	 }
	printf("max=%d",l);   
    return 0;
	
}
