#include <stdio.h>
int main()
{
/* Q86 Pattern:
	i.e. if input is 5
  1
 234
56789
 012
  3
& if input is 6
  1
 234
56789
01234
 567
  8
  */
int i,j,k=1,l,n,a;
printf("Enter no of rows = ");
scanf("%d",&n);
if (n%2==0)
{
	a = n/2  ;
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		  printf(" ");
		for(l=1; l<=(i*2)-1 ;l++ )
		{
			if (k==10)
			   k=0;
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	for(i=n-a;i>=1;i--)
	{
	    //printf("i= %d",i);
	    for(j=n-a;j>i;j--)
	      printf(" ");
	    for(l=(i*2)-1 ; l>=1 ; l--)
	    {
	        if (k==10)
	          k=0;
	        printf("%d",k);
	        k++;
	    }
	    printf("\n");
	}
}
else 
{
  a = n/2 + 1 ;
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		  printf(" ");
		for(l=1; l<=(i*2)-1 ;l++ )
		{
			if (k==10)
			   k=0;
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	for(i=n-a;i>=1;i--)
	{
	    for(j=n-a;j>=i;j--)
	      printf(" ");
	    for(l=(i*2)-1 ; l>=1 ; l--)
	    {
	        if (k==10)
	          k=0;
	        printf("%d",k);
	        k++;
	    }
	    printf("\n");
	}  
}
return 0;
}
