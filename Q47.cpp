#include <stdio.h>
int main()
{
   // Q37 
   float m1,m2,m3,m4,m5,t;
   int f=0;
   printf("*****FIRST SEMESTER*****\n");
   printf("The maximum marks in 5 subjects are 100,200,150,80,100\n");
   printf("Enter marks in 5 subjects = ");
   scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
   t= ((m1+m2+m3+m4+m5)*100)/630 ;
   //Converting marks to percentage
   m1=m1;
   m2=(100*m2)/200;
   m3=(100*m3)/150;
   m4=(100*m4)/80;
   m5=m5;
   printf("The percentage of marks in 5 subjects  : \n");
   printf("%.1f,%.1f,%.1f,%.1f,%.1f \n",m1,m2,m3,m4,m5);   
   printf("The total percentage = %.1f % \n",t);
   if (m1<40)
     f++;
   if (m2<40)
     f++;
   if (m3<40)
     f++;
   if (m4<40)
     f++;
   if (m5<40)
     f++;
   if (f>=2)
   {   	 
   	 printf("RESULT: FAIL\n");
   	 return 0;
   	 
   }
   if (m1<40)
     {
     	printf("PAPER-1 IS DUE\n");
     	return 0;
	 }
   if (m2<40)
     {
     	printf("PAPER-2 IS DUE\n");
     	return 0;
   	 }
   if (m3<40)
     {
     	printf("PAPER-3 IS DUE\n");
     	return 0;
	 }
   if (m4<40)
     {
     	printf("PAPER-4 IS DUE\n");
     	return 0;
	 }
   if (m5<40)
     {
     	printf("PAPER-5 IS DUE\n");
     	return 0;
	 }
   
   if (t<33)
      printf("RESULT: FAIL\n");	    
   else if (t>=33 && t<45)
      printf("RESULT: THIRD DIVISION\n");
   else if (t>=45 && t<60)
      printf("RESULT: SECOND DIVISION\n");
   else if (t>=60 && t<70)
      printf("RESULT: FIRST DIVISION\n");
   else if (t>=70)
      printf("RESULT: PASS WITH HONS\n"); 
   
    
return 0;
}
