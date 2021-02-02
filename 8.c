#include<stdio.h>
void main()
{ float l,b,r,per_of_rec,area_of_rec,circ_of_circle,area_of_circle;
  printf(" enter length and width of rectangle....");
  scanf("%f %f",&l,&b);
  per_of_rec=2*(l+b);
  area_of_rec=l*b;
  printf("\n perimeter of rectangle = %f",per_of_rec);
  printf("\n area of rectangle = %f",area_of_rec);
  printf("\n enter radius of circle...");
  scanf("%f",&r);
  circ_of_circle=2*3.14*r;
  area_of_circle=3.14*r*r;
  printf("\n circumference of circle= %f",circ_of_circle);
  printf("\n area of circle= %f",area_of_circle);
 }
