#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}
int compare(int a,int b,int c)
{
  if(a>b&&a>c)
  return a;
   else if (b>c)
   return b;
   else
   return c;
}
void output(int p)
{
  printf("the largest no is %d",p);
}
int main()
{
  int x,y,z,p;
  x=input();
  y=input();
  z=input();
  p =compare(x,y,z);
  output(p);
  return 0;
}