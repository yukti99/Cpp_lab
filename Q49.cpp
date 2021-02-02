#include <stdio.h>
int main()
{
	// Q49 calculating premium of an insurance company
	int health,sex,place;
	int age,amt,prem;
	printf("Enter health of the person(excellent-1/poor-2)= ");
	scanf("%d",&health);
	printf("Enter sex of the person(male-1/female-2) = ");
	scanf("%d",&sex);
	printf("Enter where the person lives(city-1/village-2) = ");
	scanf("%d",&place);
	printf("Enter age of the person = ");
	scanf("%d",&age);
	if ((health==1) && (age>=25&& age<=35) && (sex==1) && (place==1))
	   {
	   	prem = 4;
		amt=200000;
	   }
	else if ((health==1) && (age>=25&& age<=35) && (sex==2) && (place==1))
	   {
	   	prem = 3;
		amt=100000;
	   }
	else if ((health==2) && (age>=25&& age<=35) && (sex==1) && (place==2))
	   {	
	   	prem = 6;
		amt=10000;
	   }
	else 
	   {	   
	    printf("The person is NOT insured\n");
	    return 0;
       }
	printf("The premium rate = %d\n",prem);
	printf("The maximum amount for which the person can be insured = %d\n",amt);	
	return 0;
}
