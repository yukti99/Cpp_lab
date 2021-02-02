#include<stdio.h>
void main()
{ float distance,dm,di,df;
  printf("\n enter the distance between two cities in kilo meter...");
  scanf("%f",&distance);
  dm=distance/1000;
  df=0.0003048*distance;
  di=1.9044*distance;
  printf("\n distance in metres= %f",dm);
  printf("\n distance in inches= %f",di);
  printf("\n distance in feet= %f",df);
}
