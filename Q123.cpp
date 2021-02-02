#include <stdio.h>
int main()
{
	//Q123. Matrix multiplication
    int a[3][3]={{1,2,6},{3,4,9},{4,1,0}};
	int b[3][3]={{1,3,4},{2,5,6},{3,6,1}};
	int r[3][3];
	int i,j,k;
    int r1=3,c1=3,r2=3,c2=3;	
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

