#include <stdio.h>
int main()
{
	// Q29 Comparing ages of three people,find youngest of three
	int r,s,a;
	printf("Enter Ram's age = ");
	scanf("%d",&r);
	printf("Enter Shyam's age = ");
	scanf("%d",&s);
	printf("Enter Ajay's age = ");
	scanf("%d",&a);
	if (r>0 && s>0 && a>0)
	{
	    if (r<s && r<a)
	    printf("Ram is the youngest");
	    else if (s<r && s<a)
	    printf("Shyam is the youngest");
	    else if (a<s && a<r)
	    printf("Ajay is the youngest");
	    return 0;		
	}
	else
	printf("The age is invalid...");
}
	
	
