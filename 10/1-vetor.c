#include <stdio.h>
#include <stdlib.h>
void le(int *p, int n)
{
   int i;

   for (i = 0; i < n; i++)
   {
      scanf("%d", &p[i]);
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   int *p = (int *)malloc(n * sizeof(int));

   le(p, n);

   int i;

   for (i = 0; i < n; i++)
   {
      printf("%d\n", p[i]);
   }
   free(p);
   return(0);
}
