#include <stdio.h>
int main()
{   // Q106. Decimal to 16-bit binary conversion
    unsigned int dec=13 ;
    unsigned int mask=32768;    //mask = [1000 0000 0000 0000]
    printf("Binary Eqivalent : ");
    while(mask > 0)
    {
     if((dec & mask) == 0 )
         printf("0");
     else
         printf("1");
     mask = mask >> 1 ;  // Right Shift
   }
   return 0;
}

