#include <stdio.h>
#include <math.h>
int main()
{
	// Q42 to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
	
	float a,b,c,d,e,g ;
	int f=0 ;
	printf("Enter side a = ");
	scanf("%f",&a);
	printf("Enter side b = ");
	scanf("%f",&b);
	printf("Enter side c = ");
	scanf("%f",&c);	
	// checking if the sides of triangle are valid
	if (a+b <= c) 
		{
			printf("Sorry! The given sides do not make a triangle...");
		}
	else if (b+c <= a)
	    {
			printf("Sorry! The given sides do not make a triangle...");
		}
		
	else if (a+c <= b)
	    {
			printf("Sorry! The given sides do not make a triangle...");
		}
	else
	{
			if (a==b && b==c)
             {
	            f=1;
                printf("The Triangle is Equilateral\n");
              } 
            else if (a==b || b==c || a==c)
             {
	            f=1;
                printf("The Triangle is Isosceles\n");
             }
            else if (a != b != c)
             {
	             f=1;
                 printf("The Triangle is scalene\n");
             }
             
             // Checking if the triangle is right angled or not
             d =  pow ((pow(a,2) + pow(b,2)) , 0.5 ) ;
             e =  pow ((pow(b,2) + pow(c,2)) , 0.5 ) ;
             g =  pow ((pow(a,2) + pow(c,2)) , 0.5 ) ;
             if (c==d || a==e || b==g )
             {
			 
                if (f==1)
                 {
                   printf("and also\n ") ; 	
		         }    
                printf("The Triangle is Right Angled");
                
             }
       
	}

    return 0;
    
}
    
    
        
	

