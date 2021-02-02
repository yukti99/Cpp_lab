#include <stdio.h>
int main()
{
/* Q101  to print the multiplication table of the number entered by the user.
        The table should get displayed in the following form.
         29 * 1 = 29
         29 * 2 = 58
...
*/
int i,n;
printf("Enter the any number =  ");
scanf("%d",&n);
for(i=1;i<=10;i++)
    printf("%d * %d = %d\n",n,i,n*i);
return 0;	
}
