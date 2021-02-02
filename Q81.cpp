#include <stdio.h>
int main()
{
	/* Q81 Pattern 1234
                    567
                     89
                      0  */
    int i,j=1,k,a=4,b=3;
    for(i=1;i<=4;i++)
    {
      for(k=1;k<=i;k++)
      {
        printf(" ");
      }
      for(j ;j<=a ;j++)
      {
        if (j==10)
          printf("0");
        else
          printf("%d",j);        
      }
     
      a=a+b;
      b--;
      printf("\n");
    }
	 
	return 0;
}
