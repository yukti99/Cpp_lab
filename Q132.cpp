#include <stdio.h>
int main()
{
	// Q132. If a number 972 is entered through the keyboard, your program should print "Nine Seven Two"
    int n, d;
    char s[1000] ;
    printf("Enter any positive number = ");
    scanf("%d",&n) ;
    //Converting int into string
    sprintf(s, "%d", n);
    printf("Number = %d\n",n) ;
    //calculating length of string
    int i=0,l ;
    while (s[i] != '\0')
    {
        l++ ;
        i++ ;
    }
    printf("The number of digits in the number = %d\n",l) ;
    for(i=0 ;i<l ; i++)
    {
       
       if (s[i] == '0')
           printf("Zero ");
        if (s[i] == '1')
           printf("One ");
        if (s[i] == '2')
           printf("Two ");
        if (s[i] == '3')
           printf("Three ");
        if (s[i] == '4')
           printf("Four ");
        if (s[i] == '5')
           printf("Five ");
        if (s[i] == '6')
           printf("Six ");
        if (s[i] == '7')
           printf("Seven ");
        if (s[i] == '8')
           printf("Eight ");
        if (s[i] == '9')
           printf("Nine ");
           
    }
	return 0;
}

