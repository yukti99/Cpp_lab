#include<stdio.h>
void main()
{ float tempf,tempc;
  printf("\n enter temperature in fahrenheit...");
  scanf("%f",&tempf);
  float value=tempf-32;
  tempc=value*0.555;
  printf("\n temperature in celcius is..%f",tempc);
}
