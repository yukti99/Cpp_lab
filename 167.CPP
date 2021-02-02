#include<stdio.h>
#include<conio.h>
struct studetail
{ int accountno;
  char name[30];
  int balance;
  void detail();
  void showdetail();
}ob[45];
void studetail::detail()
{
  printf("\n enter your account no:");
  scanf("%d",&accountno);
  printf("\n enter your name: ");
  scanf("%s",&name);
  printf("\n enter your balance: ");
  scanf("%d",&balance);
}
void studetail::showdetail()
{
  printf("\n your account no: %d",accountno);
  printf("\n your name: %s",name);
  printf("\n your balance: %d",balance);
  printf("\n***********************************");
}
void main()
{ int n,r;
  printf("\n enter no of people : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\n enter details for %d: \n",i+1);
    ob[i].detail();
  }
  printf("\n****************************************************");
  printf("\n printing detail of those whose account balance<100: ");
  for(i=0;i<n;i++)
  {  if(ob[i].balance<=100)
       ob[i].showdetail();
  }
   printf("\n****************************************************");
   printf("\n enter withdrawl option: 1 for deposit and 0 for wihdrawl ");
  scanf("%d",&r);
   for(i=0;i<n;i++)
  {  if(r==1)
       {
	if(ob[i].balance>=1000)
	  printf("\n account no %d can withdraw",ob[i].accountno);
	else
	  printf("\n account no %d can not withdraw please deposit:",ob[i].accountno);
       }
  }
  getch();
}
