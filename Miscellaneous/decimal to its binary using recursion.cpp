#include <stdio.h>
int binary(int dec);
int main()
{
    // Converting decimal number to its binary equivalent using recursion
    int dec = 25 ;
    printf("Enter any decimal number = ");
    scanf("%d",dec);
    printf("The binary equivalent of %d is = %d\n",dec,binary(dec));
    return 0;
}
int binary(int dec)
{
    if (dec==0)
      return 0;
    else
    {
        return(dec % 2 + 10 * binary(dec / 2));
    }
}
