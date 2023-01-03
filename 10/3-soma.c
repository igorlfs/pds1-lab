#include <stdio.h>
#include <stdlib.h>
void soma(int *a, int *b, int *c, int n)
{
   for (int i = 0; i < n; i++)
   {
      c[i] = a[i] + b[i];
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   int *p1 = (int *)malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &p1[i]);
   }
   int *p2 = (int *)malloc(n * sizeof(int));

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &p2[i]);
   }
   int *p3 = (int *)malloc(n * sizeof(int));

   soma(p1, p2, p3, n);
   for (int i = 0; i < n; i++)
   {
      printf("%d\n", p3[i]);
   }
   free(p1);
   free(p2);
   free(p3);
   return(0);
}
