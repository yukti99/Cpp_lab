#include <stdio.h>
int fib(int);
int main()
{
	//recurssion -fibonacci using recurssion: 1 1 2 3 5 8 13 21 34 55 89...
	int i,n;
    printf("Enter no of elements in fibonacci series you want printed = ");    
    scanf("%d",&n);
     printf("The terms in the series are : \n");
    for(i=1;i<=n;i++)
    {
    	printf("%d ",fib(i));
	}
    return 0;
	
}
int fib(int n)
{
    if (n<2)
      return n;
	return (fib(n-1) + fib(n-2));
	
}
	
	  

