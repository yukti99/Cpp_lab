#include<iostream>
#include<cstdio>
using namespace std ;
struct studetail
{ int bno;
  char name[30];
  char aut[30];
  void detail();
  void showdetail();
}ob[45];
void studetail::detail()
{
  printf("\n enter your bno:");
  scanf("%d",&bno);
  printf("\n enter name: ");
  scanf("%s",&name);
  printf("\n enter author name: ");
  scanf("%s",&aut);
}
void studetail::showdetail()
{
  printf("\n bno: %d",bno);
  printf("\n bname: %s",name);
  printf("\n bauthor: %s",aut);
  printf("\n***********************************");
}
int main()
{ int n,r,y;
char a[30];
  printf("\n enter no of books: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\n enter details for %d: \n",i+1);
    ob[i].detail();
  }
  printf("\n menu: ");
  printf("\n 1. add information");
  printf("\n 2. display book");
  printf("\n 3. all books pf given author");
  printf("\n 4. title book: ");
  printf("\n 5. count of books in lib");
  scanf("%d",&r);
  switch(r)
  { case 2: for(int i=0;i<n;i++)
		ob[i].showdetail();
		break;
    case 3: printf("\n which author");
	    scanf("%s",&a);
	    for(int i=0;i<n;i++)
	    { if(ob[i].aut==a)
		ob[i].showdetail();
	    }
	    break;
  }
 return 0;
}
