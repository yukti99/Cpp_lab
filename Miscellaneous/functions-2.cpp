#include <stdio.h>
int sqr(int);
int main()
{
	//Functions
    int a=5,b;
    b=sqr(a);
    printf("%d",b);
	return 0;
}
int sqr(int a)
{
	return (a*a);
}
