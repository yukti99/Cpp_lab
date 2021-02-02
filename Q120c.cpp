#include <stdio.h>
void salaryraise(int *s, int b)
{
    *s = *s + b;
}
int main()
{
    // Q120 c) To show a function passing pointer.
    int salary=0, bonus=0;
    printf("Enter the employee current salary:"); 
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    salaryraise(&salary, bonus); //function passing a pointer
    printf("Final salary: %d", salary);
    return 0;
}

