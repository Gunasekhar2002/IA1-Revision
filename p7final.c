#include<stdio.h>
struct _complex{
  float real,imaginary;
};
typedef struct _complex Complex;


Complex input()
{
	Complex Complex;
	printf("enter the complex number:");
	scanf("%f %f",&Complex.real,&Complex.imaginary);
	return Complex;
}
Complex add(Complex a,Complex b)
{
	Complex sum;
	sum.real=a.real+b.real;
	sum.imaginary=a.imaginary+b.imaginary;
	
	return sum;
	
}

void output(Complex a,Complex b,Complex c)
{

  printf("sum of two complex numbers is:\n");
  printf("%.1f + %.1fi + %.1f + %.1fi = %.1f + %.1fi",a.real,b.real,a.imaginary,b.imaginary,c.real,c.imaginary);
	
}
int main()
{
	Complex a,b,c;
	a=input();
	b=input();
	c=add(a,b);
  

	output(a,b,c);
	
}