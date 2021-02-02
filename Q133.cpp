/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
	// Q133. If a number 972 is entered through the keyboard, your program should print "Nine Seven Two"
    int n, d , f=0;
    char s[1000] ;
    printf("Enter any positive number = ");
    scanf("%d",&n) ;
    // calculating number of digits
    int t;
    t = n ;
    while (n>0)
    {
        n = n/10 ;
        d++ ;
        f++ ;
    }
    n = t ;
    if ( 1 <= n <= 9 )
      d = 1 ;
    printf("The number of digits in the number = %d\n",d) ;
    printf("\nRequired output : \n");
    if ( 1 <=n<=12 )
    {
        if (n == 1)
           printf("One ");
        if (n == 2)
           printf("Two ");
        if (n == 3)
           printf("Three ");
        if (n == 4)
           printf("Four ");
        if (n == 5)
           printf("Five ");
        if (n == 6)
           printf("Six ");
        if (n == 7)
           printf("Seven ");
        if (n == 8)
           printf("Eight ");
        if (n == 9)
           printf("Nine ");
        if (n == 10)
           printf("Ten ");
        if (n == 11)
           printf("Eleven ");
        if (n == 12)
           printf("Twelve ");
    }
    if ( 13 <= n <= 19 )
        if (n == 12)
           printf("Twelve ");
        if (n == 13)
           printf("Thirteen ");
        if (n == 15)
           printf("Fourteen ");
        if (n == 16)
           printf("Twelve ");
        if (n == 18)
           printf("Twelve ");
        if (n == 19)
           printf("Nineteen ");
        if (n == 20)
           printf("Twenty ");
        
	return 0;
}





