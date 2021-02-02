#include <stdio.h>
#include <math.h>
int main()
{
    /* Q104 Compound interest,a = p( 1 + r / q )^^nq   //where ^^ is power
    When interest compounds q times per year at an annual rate of r % for n years,
    the principle p compounds to an amount a as per the following formula
    ,a = p( 1 + r / q )^^nq   //where ^^ is power  */
    float p=100, r=2 ,a;
    int q=2,n=2,i;
    for(i=1,i<=10;i++)
    {
        printf("Enter Principle amount, annual rate of interest, no of years  = ");
        scanf("%f %f %d",&p,&r,&q);
        printf("No of times it is compounded  = ");
        scanf("%f",&n);
        a = pow (p*(1 + r/q), n*q);
        printf("Principle amount = %f , rate of interest = %f , no of years = %d\n",p,r,q);
        printf("The total amount after %d years = %.2f\n",q,a);
    }
    return 0;
}

