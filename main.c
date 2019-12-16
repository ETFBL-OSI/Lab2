#include<stdio.h>
#include<math.h>

int stepenovanje(int x)
{
    int y;
    y=x*x;
    return y;
}
double korijen_broja(int x)
{
    x=sqrt(x);
    return x;
}
double dijelenje(double p, double d)
{
    return p/d;
}
double oduzimanje(double a, double b)
{
	return (a-b);
}

double sabiranje(double a, double b)
{
	return (a+b);
	}
long factorial(int n)
{
  int c;
  long r = 1;

  for (c = 1; c <= n; c++)
    r = r * c;

  return r;
}
int main()
{


}
