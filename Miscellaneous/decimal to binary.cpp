#include <stdio.h>
int main()
{
    // Converting decimal number to its binary equivalent 
    int dec=25;
    long bin=0;
    int r,base,t;
    //printf("Enter any decimal number = ");
    //scanf("%d",dec);
    t = dec;
    while (dec > 0)
    {
        r = dec % 2 ;
        base = 10 * base ;
        dec = dec / 2 ;
        bin = bin +  r*base ;
        
    }
    dec = t ;
    printf("The binary equivalent of %d is = %ld\n",dec,bin);
    return 0;
}

