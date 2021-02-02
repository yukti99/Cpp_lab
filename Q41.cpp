#include <stdio.h>
int main()
{  /* Q41
    To determine whether the character entered is a capital letter, 
	 a small case letter, a digit or a special symbol.
	 Characters ASCII Values
     A - Z	 65 - 90
     a - z 	 97 - 122
     0 - 9 	 48 - 57
     special symbols
     0 - 47, 58 - 64, 91 - 96, 123 - 127 */
     char c;
     printf("Enter any character = ");
     scanf("%c",&c);
     if (c>=65 && c<=90 )
        printf("The given character is a capital letter");
     else if (c>=97 && c<=122)
        printf("The given character is a small case letter");
     else if (c>=48 && c<=57)
        printf("The given character is a digit");
     else if ((c>=0 && c<=47 )|| (c>=58 && c<=64 )|| (c>=91 && c<=96 )|| (c>=123 && c<=127))
        printf("The given character is a special character");
     return 0;

	
}
