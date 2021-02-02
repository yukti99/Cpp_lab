#include <stdio.h>
int main()
{
	// Q48 To find the grace marks for a student using switch case
	int fail,grace;
	char cls;
	printf("Enter you class a-First/b-Second/c-Third = ");
	scanf("%c",&cls);
	printf("Enter the number of subjects you have failed = ");
	scanf("%d",&fail);      	
	switch (cls)
	{
		case 'a':
			if (fail>3)
	   	      printf("NO grace marks");
	   	      
	   	    
	   	    else 
	        {
	    	  grace = 5*fail ;
	   	      printf("Grace marks = %d",grace);
		    }
		    break;
		case 'b':
			if (fail>2)
	   	      printf("NO grace marks");
	   	    
	   	    else 
	        {
	    	  grace = 4*fail ;
	   	      printf("Grace marks = %d",grace);
		    }
		    break;
		case 'c':
			if (fail>1)
	   	       printf("NO grace marks");
	   	    else if (fail==1)
	   	    {
		      grace = 5*fail ;
	   	      printf("Grace marks = %d",grace);	
		    } 	
		    break;
		default:
		    printf( "Bad input, quitting!\n" );
            break;		
	
	}
	return 0;
	
}
