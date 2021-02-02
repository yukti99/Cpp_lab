
#include <stdio.h>
void bubble_sort(char s[100],int n);
int main()
{ 
  // Q160. To sort a set of names stored in an array in alphabetical order.
  int i , j, n ;
  char s[100][100],l;
  printf("Enter no of names in string : ");
  scanf("%d",&n);
  
  for(i=0 ; i < n ; i++)
  {
      printf("Enter names :");
      scanf("%s",&s[i]);
  }
 
  for(l=0;s[l]!='\0';l++)
  {}
  bubble_sort(s,l);
  return 0;
     
}
void bubble_sort(char s[100],int n)
{
   int i,j,temp ;
   /*
   for(i=0; i < n-1 ; ++i)
    {
      for(j=0; j < n-1-i ; ++j)
      {
        if (s[j] > s[j+1])
        {
          // swapping
          temp = s[j] ;
          s[j] = s[j+1] ;
          s[j+1] = temp ;
        } 
      }
    }
    printf("Sorted String :\n");
    for(i=0 ; i<n ; i++ )
      printf("%c",s[i]);*/
}

 






