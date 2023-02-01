# include <stdio.h>
int combinations(int n,int r,int nmr)
{
  int ncr=n/(r*nmr);
  return ncr;
}
