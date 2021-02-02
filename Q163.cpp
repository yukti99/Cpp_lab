#include <stdio.h>
int main()
{ 
  /* Q163. Program that takes a set of names of individuals
  and abbreviates the first, middle and other names except the last name by their first letter.*/
  char name[100] ;
  int l,i,j,k;
  printf("Enter your full name (first name-middle name-last name) : ");
  gets(name);
  for(l=0 ; name[l]!='\0' ; l++)
  {} ;
  printf("%c",name[0]);
    for(i=0 ; i<l ; i++)
  {
      if (name[i] == ' ')
      {
        j = i ;
        break;
      }
  }
  int m;
  m = j+1 ;
  printf(" %c ",name[m]);
  for( m; m < l ; m++)
  {
     if (name[m] == ' ')
      {
        k = m ;
        break;
      }
  }
  k++;
  for(k ; k<l ; k++)
    printf("%c",name[k]);
  
  return 0;
}

