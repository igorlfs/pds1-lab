#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primalidade(long int p)
{
   long long int i;

   if (p < 2)
   {
      return(-1);
   }
   if (p == 2)
   {
      return(1);
   }
   else if (p > 2)
   {
      for (i = 2;; i++)
      {
         if ((p % i) == 0)
         {
            return(0);
         }
         else if (i > sqrt(p))
         {
            return(1);
         }
      }
   }
}

int main()
{
   long long int x;

   while (scanf("%lld", &x) != EOF)
   {
      printf("%d\n", primalidade(x));
   }
   return(0);
}
