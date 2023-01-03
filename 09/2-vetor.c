#include <stdio.h>
#include <stdlib.h>
void imprime(int vetor[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%d ", vetor[i]);
   }
   putchar('\n');
}

void multiplica(int vetor[], int n, double v)
{
   for (int i = 0; i < n; i++)
   {
      vetor[i] = v * vetor[i];
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   int  v[n];
   int *p = &v[0];

   for (int i = 0; i < n; i++)
   {
      scanf("%d", (p + i));
   }
   double f;

   scanf("%lf", &f);

   imprime(v, n);
   multiplica(v, n, f);
   imprime(v, n);
   multiplica(v, n, 1 / f);
   imprime(v, n);
   return(0);
}
