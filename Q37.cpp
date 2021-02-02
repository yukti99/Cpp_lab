#include <stdio.h>
int main()
{
	// Q37 To decide division of a student
	// Let subjects be English(E), Chemistry(C) ,Physics(P), Maths(M) and Computer Science(CP)
	// Max marks: E-100,C-70,P-70,M-100,C-100
	float E,C,P,M,CP,Total_perc;
	int f=0;
	printf("Enter marks in English(/100) = ");
	scanf("%f",&E);
	printf("Enter marks in Chemistry(/70) = ");
	scanf("%f",&C);
	printf("Enter marks in Physics(/70) = ");
	scanf("%f",&P);
	printf("Enter marks in Maths(/100) = ");
	scanf("%f",&M);
	printf("Enter marks in Computer Science(/100) = ");
	scanf("%f",&CP);
	Total_perc= ((E+C+P+M+CP)*100)/440; 
	C= (100*C)/70;
	P= (100*P)/70;
	if (E<40 )
	{
	   f++;	 
	   printf("The paper is due for English..\n");
	     
    }
	if (C<40 && f<1 ) 
	{	
	   f++;
	   printf("The paper is due for Chemistry..\n");
	   
	   	
    }
	if (P<40 && f<1)
	{
	    f++;
		printf("The paper is due for Physics..\n");
	   
    }
    if (M<40 && f<1)
    {
    	f++;
	    printf("The paper is due for Maths..\n");
	   
    }
	if (CP<40 && f<1)
	{
	    f++;
		printf("The paper is due for Computer Science..\n");
	   
    }
	  
	if (Total_perc < 33 || f>=2)
	   printf("Result : You have failed this semester");
	   
	if (f==0)
	{
	    if (Total_perc >33 && Total_perc <45 )
	    printf("Result : Third division"); 
	    else if (Total_perc >45 && Total_perc <60 )
		printf("Result : Second division");	
	    else if (Total_perc >60 && Total_perc <70 )	
		printf("Result : Second division");
	    else	
		printf("Result : Congratulations! PASS WITH HONS");
		
	}
   return 0;   	
	
}
