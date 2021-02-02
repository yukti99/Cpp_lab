#include<stdio.h>
#include<conio.h>
struct studetail
{ int roll;
  char name[30];
  char department[30];
  char course[30];
  int yearjoi;
  void detail();
  void showdetail();
}ob[45];
void studetail::detail()
{
  printf("\n enter your roll no:");
  scanf("%d",&roll);
  printf("\n enter your name: ");
  scanf("%s",&name);
  printf("\n enter your department: ");
  scanf("%s",&department);
  printf("\n enter your course: ");
  scanf("%s",&course);
  printf("\n enter your year of joining: ");
  scanf("%d",&yearjoi);
}
void studetail::showdetail()
{
  printf("\n your roll no: %d",roll);
  printf("\n your name: %s",name);
  printf("\n your department: %s",department);
  printf("\n your course: %s",course);
  printf("\n your year of joining: %d",yearjoi);
  printf("\n***********************************");
}
void main()
{ int n,r,y;
  printf("\n enter no of your student : ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\n enter details of student %d: \n",i+1);
    ob[i].detail();
  }
  printf("\n****************************************************"):
  printf("\n enter year to print detail: ");
  scanf("%d",&y);
  for(i=0;i<n;i++)
  {  if(ob[i].yearjoi==y)
       ob[i].showdetail();
  }
   printf("\n****************************************************"):
   printf("\n enter roll no whose detail is to be printed: ");
  scanf("%d",&r);
   for(i=0;i<n;i++)
  {  if(ob[i].roll==r)
       ob[i].showdetail();
  }
  getch();
}
