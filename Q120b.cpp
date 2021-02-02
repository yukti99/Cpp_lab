#include <stdio.h>
int* Greater(int*,int*) ;
int main()
{  //Q120. b)  To show a function returning pointer.
    int n1=0,n2=0,*result;
    printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the second number : ");
    scanf("%d", &n2);
    result = Greater(&n1,&n2) ;//function Greater returns a pointer
    printf(" The number %d is larger\n",*result);
    return 0;
}
int* Greater(int *a, int *b)
{
    if (*a > *b)
      return (a);
    else 
      return (b);
}

