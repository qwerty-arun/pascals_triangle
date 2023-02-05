# include <stdio.h>
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
 int fac=n*factorial(n-1);
  return fac;
}
