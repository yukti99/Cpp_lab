#include <stdio.h>

int main()
{
	// Q73 to print all the ASCII values and their equivalent characters using a for loop. The ASCII values vary from 0 to 255.
	int i;
	printf("The ASCII values and their equivalent character are : \n");
	for(i=0;i<=255;i++)
	{
	  printf(" %d = %c \n ",i,i);
	}
	 
	return 0;
	
}
