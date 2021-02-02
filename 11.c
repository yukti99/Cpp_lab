#include<stdio.h>
void main()
{ int value,a,b,c,d,e,f,g,h,i,sum;
  printf("\n enter a five digit no: ");
  scanf("%d",&value);
   a=value%10;
    b=(value-a)%100;
   c=(value-b)%1000;
    d=(value-c)%10000;
    e=(value-d)%100000;
    f=b/10;
    g=c/100;
    h=d/1000;
    i=e/10000;
    int newvalue=(a*10000)+(f*1000)+(g*100)+(h*10)+i;
    printf("reverse of no is = %d",newvalue);
}    
