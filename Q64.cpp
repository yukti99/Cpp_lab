#include <stdio.h>
int main()
{
	// Q64 To print all prime numbers from 1 to 300	
	int i,j,f;
	printf("The Prime Numbers from 1 to 300 are :\n");
	for(i=1;i<=300;i++)
	{   
	    f=0;
		for(j=2;j<i;j++)
		{
			if (i%j==0)
			{
			   f++;
			   break;				
			}			   
			else
			   continue;
		}
		if (f==0)
		  printf("%d  ",i);		
	}		  	  
	return 0;
}
