#include <stdio.h>
int main()
{
	// Q67 ALl combinations of 1,2,3 using for loop
	int i,j,k;
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)		
			for(k=1;k<=3;k++)	
				printf("%d%d%d\t",i,j,k);	
	return 0;
}
