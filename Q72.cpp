#include <stdio.h>
int main()
{
	// Q72 to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
	int i=0;
	printf("The ASCII values and their equivalent character are : \n");
	while (i<=255)
	{
	  printf(" %d = %c \n ",i,i);
	  i++;
	}
	 
	return 0;
}
