#include <stdio.h>
int main()
{   
    //Q153. To copy a string into another
    char s1[100], s2[100], i = 0, j ;
    printf("This program copies a string into another\n");
    printf("Enter string: ");
    gets(s1);    
    // calculate the length of string s1
    // and store it in i
    while (s1[i] != '\0')
      i++ ;
    for(j = 0; j < i ; j++)
      s2[j] = s1[j] ;
    s2[i] = '\0';
    printf("After copying: \n");
    puts(s2);
    return 0;
}
   
