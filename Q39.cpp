#include <stdio.h>
int main()
{
	// Q39 Greatest of three numbers
	
       int a, b, c, big ;
       printf("Enter three numbers : ") ;
       scanf("%d %d %d", &a, &b, &c) ;
       // using ternary/conditonal operators
       big = (a > b) ? ( a > c ? a : c) : (b > c ? b : c) ;
       printf("\nThe biggest number is : %d", big) ;

	
	return 0;
	
}
