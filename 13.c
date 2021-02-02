#include<stdio.h>
void main()
{ float population,per_men,per_liteman;
  printf("\n enter population of town...");
  scanf("%f",&population);
  per_men=0.52*population;
  per_liteman=0.35*population;
  printf("\n percentage of man= %f",per_men);
  printf("\n percentage of  literate man= %f",per_liteman);
}
  
