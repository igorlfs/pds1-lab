#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void media(double vet[], int n, int *i)
{
   int soma = 0;

   for (int j = 0; j < n; j++)
   {
      soma += vet[j];
   }
   soma = soma / n;
   double menor = fabs(soma - vet[0]);

   *i = 0;
   for (int j = 0; j < n; j++)
   {
      if (fabs(soma - vet[j]) < menor)
      {
         menor = fabs(soma - vet[j]);
         *i    = j;
      }
   }
}

int main()
{
   int q;

   scanf("%d", &q);
   double v[q];

   for (int j = 0; j < q; j++)
   {
      scanf("%lf", (v + j));
   }

   int k;

   media(v, q, &k);
   printf("%d\n", k);
   return(0);
}
