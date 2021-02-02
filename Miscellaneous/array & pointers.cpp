#include <stdio.h>
int main()
{
	int i=4,*j,*k;
	j=&i;
	printf("j=%u\n",j); 
	j=j+1;
	printf("j=%u\n",j);  // %u for address
	j=j+9;
	printf("j=%u\n",j);
	k=j+3;
	printf("k=%u\n",k);
	return 0;
}

