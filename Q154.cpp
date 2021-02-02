#include <stdio.h>
int main()
{   
    //Q154. To copy first n characters of one string into another
    char s1[100], s2[100], i = 0, j ,n ;
    printf("This copies first n characters of one string into another\n");
    printf("Enter string: ");
    gets(s1);
    printf("Enter n = ");
    scanf("%d",&n);
    // calculate the length of string s1
    // and store it in i
    while (s1[i] != '\0')
      i++ ;
    for(j = 0; j < n ; j++)
      s2[j] = s1[j] ;
    printf("After copying first %d characters : \n",n);
    puts(s2);
    return 0;
}
   
