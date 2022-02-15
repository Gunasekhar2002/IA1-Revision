#include<stdio.h>
int input()
{
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if (a>b && a>c)
    return a;
  else if (b>a && b>c)
    return b;
   else
  return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest value is %d",largest);
}
int main()
{
  int a,b,c,large,largev;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
}
