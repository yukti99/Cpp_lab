#include <stdio.h>
int main()
{
/* Q98 Pattern 
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

*/
int i,j,k,l,temp,blank;
int a=0;
char n;
printf("Enter middle-most alphabet in double pyramid(E/F/G..) = ");
scanf("%c",&n);
for(i=n ;i>='A';i--)
{
  for(j='A';j<=i;j++)
  {
      printf("%c ",j);
  }
  if (a==0)
    blank=0;
  else
    blank=(a*2)-1;
  for(k=1 ; k<=blank ; k++)
  {
      printf("  ");
  }
  if (blank==0)
    temp=i-1;
  else
    temp=i;
  for(l=temp;l>='A';l--)
  {
      printf("%c ",l);
  }
  a++;
  printf("\n");
}
return 0;	
}
