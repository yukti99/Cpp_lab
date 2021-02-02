#include <stdio.h>
int main()
{
	// matrix multiplication
    int a[3][2]={{1,2},{3,4},{4,1}};
	int b[2][3]={{1,3,4},{2,5,6}};
	int r[2][3];
	int i,j,k;
    int r1=3,c1=2,r2=2,c2=3;	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		  r[i][j]=0;
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				r[i][j]+=a[i][k] * b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		  printf("%d  ",r[i][j]);
		  if(j == c2-1)
                printf("\n\n");	
		}
		
		
	}
		
	
	return 0;
}

