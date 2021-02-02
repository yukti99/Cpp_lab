#include<stdio.h>
#include<math.h>
void main()
{ float r,p,t,simpleinterest,compoundinterest;
  printf(" hello user");
  printf("\n enter the value of rate,principle,time respectively");
  scanf("%f %f %f",&r,&p,&t);
  simpleinterest=p*(1+r*t);
  printf("\n simple interest= %.2f",simpleinterest);
  float value1=1+r/100; 
  float value2=pow(value1,t);
  compoundinterest=p*value2;
  printf("\n compound interest= %.2f",compoundinterest);
}
   
