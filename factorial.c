# include <stdio.h>
int f=1;
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  f=n*factorial(n-1);
}
