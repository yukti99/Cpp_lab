#include<stdio.h>
void main()
{ float s1,s2,s3,s4,s5,agg,per;
  printf(" enter ur marks in subject1: ");
  scanf("%f",&s1);
 printf(" enter ur marks in subject2: ");
  scanf("%f",&s2);
 printf(" enter ur marks in subject3: ");
  scanf("%f",&s3);
 printf(" enter ur marks in subject4: ");
  scanf("%f",&s4);
 printf(" enter ur marks in subject5: ");
  scanf("%f",&s5);
// printf( " marks obtained are......");
 //printf(" marks in subject1=  %f",s1);
// printf(" marks in subject2=  %f",s2);
// printf(" marks in subject3=  %f",s3);
// printf(" marks in subject4=  %f",s4);
// printf(" marks in subject5=  %f",s5);
 agg=s1+s2+s3+s4+s5;
 per=agg/5;
 printf(" aggregate marks obtained... %f",agg);
 printf(" percentage obtained =  %f",per);
 printf( "... thank u...");
}
 
