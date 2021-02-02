#include<stdio.h>
void main()
{ int value,a,b,sum;
  printf("\n enter a four digit value....");
  scanf("%d",&value);
  a=value%10;
  b=value/1000;
  sum=a+b;
  printf("\n sum of first and last term of digit is: %d",sum);
}
