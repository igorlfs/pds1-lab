#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void primalidade(int k, int *p)
{
   for (int i = 2;; i++)
   {
      if ((k % i) == 0)
         break;
      else if (i > sqrt(k))
      {
         *p = k;
         break;
      }
   }
}

void primos(int m, int *p1, int *p2)
{
   *p2 = 0;
   *p1 = 0;
   for (int j = m + 1; *(p2) == 0; j++)
      primalidade(j, p2);
   for (int j = m - 1; *(p1) == 0; j--)
      primalidade(j, p1);
}

int main()
{
   int m, p1, p2;

   scanf("%d", &m);
   primos(m, &p1, &p2);
   printf("%d\n%d\n", p1, p2);
   return(0);
}
