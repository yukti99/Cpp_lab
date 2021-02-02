#include <stdio.h>
int main()
{
    // Q105. To swap two numbers using Bitwise operator i.e XOR(^)
    // ^ operator gives 1 when both inputs are opposite otherwise it gives 0
    int x,a,b;
    printf("Enter any two numbers = ");
    scanf("%d %d",&a,&b);
    printf("The numbers before swapping are %d and %d\n",a,b);
    // using XOR operator
    x = a ^ b ;
    a = x ^ a ;
    b = x ^ b ;
    printf("The numbers after swapping are %d and %d",a,b);
    return 0;
}
