#include <stdio.h>
#include <stdlib.h>
int soma(int vetor[], int t)
{
   if (t < 1)
   {
      return(0);
   }
   else
   {
      return(vetor[t - 1] + soma(vetor, t - 1));
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   int p[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &p[i]);
   }
   printf("%d\n", soma(p, n));
   return(0);
}
