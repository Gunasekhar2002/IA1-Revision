#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrtn;
  sqrtn=sqrt(n);
  return sqrtn;
}
void output(float n,float sqrt_result)
{
  printf("the square root of a given number %f is %f",n,sqrt_result);

}
int main()
{
  float nsq,sqres;
  nsq=input();
  sqres=my_sqrt(nsq);
  output(nsq,sqres);
}