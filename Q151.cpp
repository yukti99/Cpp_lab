#include <stdio.h>
int main()
{   
    //Q151. To append one string at the end of another
    char s1[100], s2[100], i = 0, j;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    // calculate the length of string s1
    // and store it in i
    while (s1[i] != '\0')
      i++ ;
    s1[i] = ' ';
    i++;
    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("After concatenation: \n");
    puts(s1);
    return 0;
}
