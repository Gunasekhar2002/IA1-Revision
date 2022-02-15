#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  return n;

}
int sum_n(int n)
{
  int i,sum=0;
  for (i=0;i<=n;i++)
  {
    sum+=i;
    
  }
  return sum;
}
void output(int n,int sum)
{
  printf("sum of the given number %d is %d",n,sum);
}
int main()
{
  int n,sumn;
  n=input_n();
  sumn=sum_n(n);
  output(n,sumn);
}
