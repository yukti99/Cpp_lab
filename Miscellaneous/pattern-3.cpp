#include <stdio.h>
int main()
{
	/* Pattern : A
	             AB
	             ABC
	             ABCD
	             ABCDE ....     */
    int i,j,l;
    printf("Enter the last letter of this series = ");
    scanf("%c",&l);
    for(i='A';i<=l;i++)
    {
    	for(j='A';j<=i;j++)
    	   printf("%c",j);
    	printf("\n");
	}	
	return 0;
}
