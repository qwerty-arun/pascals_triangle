# include <stdio.h>
void factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  f=n*factorial(n-1);
}