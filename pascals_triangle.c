  # include <stdio.h>
  # include "pascals_triangle.h"
void pascals_triangle()
  {
    int rows;
    printf("Enter no. of rows of Pascal's triangle that need to be printed:\n");
    scanf("%d",&rows);
   printf("Pascal's triangle: \n");
   for(int n=0;n<rows;n++)
   {
     for(int r=0;r<=n;r++)
     {
       int nfact=factorial(n);
       int rfact=factorial(r);
       int nminusr_fact=factorial(n-r);
       int c=combinations(nfact,rfact,nminusr_fact);
       printf("%d \t",c);
     }
     printf("\n");
   }
  }
 
