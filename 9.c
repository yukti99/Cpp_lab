#include<stdio.h>
#include<math.h>
void main()
{ float x1,x2,y1,y2,distance;
  printf("\n enter values of x1,x2,y1,y2 respectively......");
  scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
  float v=(x1-x2)*(x1-x2);
  float v2=(y1-y2)*(y1-y2);
  float v3=v+v2;
  distance=pow(v3,0.5);
  printf("\n distance= %f",distance);
  }
